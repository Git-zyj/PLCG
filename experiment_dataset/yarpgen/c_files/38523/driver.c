#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned long long int var_2 = 1493610810092479875ULL;
long long int var_4 = 9189669885621651263LL;
unsigned char var_7 = (unsigned char)101;
long long int var_8 = 4093698486699051811LL;
unsigned char var_10 = (unsigned char)16;
unsigned long long int var_11 = 17135916266250512824ULL;
int var_12 = -640090635;
int zero = 0;
long long int var_13 = -3130579265208803626LL;
unsigned long long int var_14 = 4640687489295010100ULL;
unsigned long long int var_15 = 15323181747149063671ULL;
void init() {
}

void checksum() {
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
