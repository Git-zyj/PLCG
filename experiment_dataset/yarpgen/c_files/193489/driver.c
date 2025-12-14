#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)46;
_Bool var_1 = (_Bool)1;
unsigned long long int var_2 = 160415775625306225ULL;
_Bool var_4 = (_Bool)1;
unsigned int var_7 = 2928450656U;
unsigned char var_8 = (unsigned char)160;
int var_9 = -1100386767;
int zero = 0;
_Bool var_10 = (_Bool)1;
unsigned int var_11 = 2328387870U;
_Bool var_12 = (_Bool)0;
unsigned int var_13 = 1546255833U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
