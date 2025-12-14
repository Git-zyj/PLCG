#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)152;
_Bool var_2 = (_Bool)1;
_Bool var_3 = (_Bool)1;
_Bool var_5 = (_Bool)1;
int var_7 = 2071667232;
signed char var_9 = (signed char)-69;
_Bool var_10 = (_Bool)0;
unsigned char var_11 = (unsigned char)203;
signed char var_12 = (signed char)21;
int zero = 0;
int var_13 = 1505599306;
unsigned long long int var_14 = 3787781928689284245ULL;
long long int var_15 = 4769843865980063150LL;
unsigned long long int var_16 = 17854968152783082623ULL;
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
