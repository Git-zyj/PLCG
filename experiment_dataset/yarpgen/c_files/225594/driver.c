#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2368653010U;
signed char var_4 = (signed char)25;
long long int var_5 = -8272665927357489798LL;
unsigned long long int var_7 = 9271751613301065971ULL;
_Bool var_9 = (_Bool)0;
long long int var_10 = -7944717525681857002LL;
int zero = 0;
long long int var_11 = -477003607389992756LL;
signed char var_12 = (signed char)101;
_Bool var_13 = (_Bool)0;
short var_14 = (short)-14437;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
