#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)255;
int var_1 = 103913277;
unsigned char var_6 = (unsigned char)12;
_Bool var_7 = (_Bool)0;
unsigned char var_8 = (unsigned char)207;
_Bool var_9 = (_Bool)1;
unsigned long long int var_12 = 1536470547918013279ULL;
_Bool var_13 = (_Bool)0;
int zero = 0;
unsigned char var_16 = (unsigned char)203;
unsigned char var_17 = (unsigned char)184;
unsigned long long int var_18 = 15873690723169653198ULL;
void init() {
}

void checksum() {
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
