#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 7198752893960765145ULL;
unsigned int var_6 = 3737568142U;
int var_7 = 923077576;
_Bool var_8 = (_Bool)1;
int var_11 = 1179810502;
int var_18 = 1249002273;
int zero = 0;
unsigned long long int var_20 = 1447171778212632769ULL;
int var_21 = -771251056;
void init() {
}

void checksum() {
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
