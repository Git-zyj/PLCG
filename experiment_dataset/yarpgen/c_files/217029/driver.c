#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)0;
long long int var_4 = -5636322470915939341LL;
short var_5 = (short)-27276;
unsigned long long int var_6 = 2450194157804408500ULL;
short var_9 = (short)-23857;
short var_10 = (short)-24871;
unsigned long long int var_12 = 13222832030560044140ULL;
int zero = 0;
long long int var_14 = -2782197992868583909LL;
unsigned int var_15 = 1241804114U;
unsigned int var_16 = 2863771170U;
int var_17 = 345252926;
signed char var_18 = (signed char)-57;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
