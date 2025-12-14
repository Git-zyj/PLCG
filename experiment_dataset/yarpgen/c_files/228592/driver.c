#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 8275323785746028994LL;
int var_5 = -1020379081;
unsigned int var_6 = 2489969074U;
long long int var_7 = 2598566714214106012LL;
unsigned int var_8 = 2886102982U;
short var_9 = (short)28204;
_Bool var_11 = (_Bool)1;
unsigned char var_12 = (unsigned char)208;
int zero = 0;
_Bool var_14 = (_Bool)1;
unsigned long long int var_15 = 6319455767204395688ULL;
unsigned char var_16 = (unsigned char)224;
unsigned long long int var_17 = 4854918464382137907ULL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
