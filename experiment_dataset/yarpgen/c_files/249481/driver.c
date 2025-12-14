#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1362627826;
unsigned int var_1 = 611833594U;
long long int var_3 = -5498884978972138284LL;
_Bool var_4 = (_Bool)0;
int var_8 = -40893599;
_Bool var_9 = (_Bool)1;
int zero = 0;
unsigned int var_11 = 4124521682U;
int var_12 = 630580869;
int var_13 = 2082060209;
unsigned short var_14 = (unsigned short)51497;
unsigned char var_15 = (unsigned char)227;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
