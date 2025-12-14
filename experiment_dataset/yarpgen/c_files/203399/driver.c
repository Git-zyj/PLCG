#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_6 = 5695214602031463877LL;
unsigned long long int var_9 = 4369896565877328450ULL;
int var_13 = -401446778;
long long int var_15 = 3980397052852532183LL;
long long int var_16 = 413248036436672456LL;
int zero = 0;
unsigned int var_17 = 3201854743U;
unsigned int var_18 = 3006584861U;
_Bool var_19 = (_Bool)0;
unsigned long long int var_20 = 11885660593509754832ULL;
_Bool var_21 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
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
