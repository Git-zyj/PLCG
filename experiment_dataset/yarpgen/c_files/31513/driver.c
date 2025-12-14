#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 3612464043100943082ULL;
unsigned long long int var_8 = 844511737839279801ULL;
short var_10 = (short)-23080;
unsigned long long int var_11 = 17420089342775847074ULL;
unsigned long long int var_14 = 14051618430675026153ULL;
int zero = 0;
unsigned long long int var_16 = 9799292017719312291ULL;
_Bool var_17 = (_Bool)0;
unsigned long long int var_18 = 12943484067243695955ULL;
_Bool var_19 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
