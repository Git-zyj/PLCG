#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1061112303;
_Bool var_2 = (_Bool)0;
long long int var_3 = -5697846958618273417LL;
long long int var_4 = -7434549975974025964LL;
unsigned char var_5 = (unsigned char)227;
unsigned char var_9 = (unsigned char)133;
int var_10 = -991087934;
long long int var_11 = 6187501417881077493LL;
int zero = 0;
short var_13 = (short)30816;
unsigned char var_14 = (unsigned char)14;
unsigned char var_15 = (unsigned char)203;
_Bool var_16 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
