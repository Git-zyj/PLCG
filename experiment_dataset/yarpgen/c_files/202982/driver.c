#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2083252458U;
unsigned int var_1 = 4028125306U;
unsigned int var_3 = 3362166972U;
unsigned short var_5 = (unsigned short)54219;
long long int var_8 = -438514894800541489LL;
_Bool var_9 = (_Bool)1;
unsigned int var_10 = 2071286573U;
int zero = 0;
_Bool var_11 = (_Bool)1;
unsigned int var_12 = 1506758513U;
unsigned int var_13 = 1764833777U;
void init() {
}

void checksum() {
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
