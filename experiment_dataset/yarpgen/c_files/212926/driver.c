#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 4037849355U;
long long int var_9 = 8235876481691582329LL;
signed char var_11 = (signed char)55;
_Bool var_15 = (_Bool)1;
int zero = 0;
unsigned char var_20 = (unsigned char)85;
signed char var_21 = (signed char)-70;
int var_22 = -853483153;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
