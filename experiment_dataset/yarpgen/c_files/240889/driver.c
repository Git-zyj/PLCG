#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)98;
_Bool var_1 = (_Bool)1;
int var_3 = -1629635987;
unsigned char var_5 = (unsigned char)7;
unsigned char var_7 = (unsigned char)78;
unsigned int var_8 = 3246408139U;
long long int var_9 = -6992655940956996653LL;
_Bool var_10 = (_Bool)0;
int var_11 = -1233768368;
int zero = 0;
unsigned char var_12 = (unsigned char)144;
int var_13 = 1522705198;
void init() {
}

void checksum() {
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
