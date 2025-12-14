#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)44090;
unsigned char var_7 = (unsigned char)10;
unsigned long long int var_11 = 11025908187627442253ULL;
signed char var_16 = (signed char)-98;
int zero = 0;
unsigned int var_18 = 2036716789U;
unsigned int var_19 = 3825456707U;
_Bool var_20 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
