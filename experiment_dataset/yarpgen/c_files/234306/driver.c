#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -461766968;
long long int var_3 = -4539541880770659226LL;
unsigned int var_4 = 2013095962U;
long long int var_7 = 7100728642953091256LL;
_Bool var_8 = (_Bool)1;
int var_9 = -148825205;
_Bool var_10 = (_Bool)1;
_Bool var_11 = (_Bool)1;
unsigned int var_14 = 1540909612U;
int var_18 = 951785587;
int zero = 0;
long long int var_19 = 8970563959431515744LL;
long long int var_20 = -1883447203922313152LL;
int var_21 = 431444526;
long long int var_22 = -1621517801208401994LL;
int var_23 = 977501823;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
