#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3147986984U;
_Bool var_1 = (_Bool)0;
_Bool var_2 = (_Bool)1;
unsigned int var_4 = 4198550209U;
_Bool var_5 = (_Bool)0;
unsigned int var_6 = 3753200113U;
unsigned int var_7 = 236424501U;
unsigned long long int var_9 = 3154427151139061287ULL;
int zero = 0;
unsigned char var_10 = (unsigned char)227;
unsigned short var_11 = (unsigned short)33259;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
