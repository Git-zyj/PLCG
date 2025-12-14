#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)51570;
unsigned long long int var_1 = 12806230317007639879ULL;
int var_4 = 1120175797;
signed char var_6 = (signed char)105;
_Bool var_7 = (_Bool)1;
unsigned char var_9 = (unsigned char)59;
int var_10 = -1252245097;
unsigned int var_11 = 3103798966U;
unsigned int var_14 = 3173238539U;
int zero = 0;
_Bool var_15 = (_Bool)0;
_Bool var_16 = (_Bool)1;
_Bool var_17 = (_Bool)0;
_Bool var_18 = (_Bool)0;
unsigned short var_19 = (unsigned short)22647;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
