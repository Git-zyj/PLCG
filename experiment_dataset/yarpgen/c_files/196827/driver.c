#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 14311222077843924202ULL;
int var_2 = -975517073;
unsigned short var_4 = (unsigned short)37645;
_Bool var_5 = (_Bool)0;
signed char var_13 = (signed char)-75;
long long int var_15 = -5036758485327854134LL;
signed char var_17 = (signed char)-35;
int zero = 0;
unsigned int var_19 = 1124023609U;
short var_20 = (short)-1607;
signed char var_21 = (signed char)-123;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
