#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 15105731172979054652ULL;
signed char var_1 = (signed char)-14;
unsigned short var_2 = (unsigned short)54250;
signed char var_5 = (signed char)92;
unsigned long long int var_6 = 15432388957710027160ULL;
unsigned long long int var_7 = 12986106894955154391ULL;
unsigned short var_9 = (unsigned short)65279;
unsigned int var_13 = 2622100435U;
int zero = 0;
signed char var_20 = (signed char)-88;
unsigned short var_21 = (unsigned short)14370;
signed char var_22 = (signed char)-12;
unsigned int var_23 = 1296034829U;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
