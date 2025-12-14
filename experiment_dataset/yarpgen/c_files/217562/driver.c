#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned short var_1 = (unsigned short)22147;
long long int var_2 = 5120847788792326307LL;
unsigned long long int var_3 = 10150032189616423771ULL;
signed char var_6 = (signed char)-63;
long long int var_7 = 5227183732880042729LL;
unsigned int var_13 = 2525912532U;
int var_15 = 1899237252;
int zero = 0;
unsigned long long int var_16 = 3241555745833642760ULL;
unsigned int var_17 = 6335965U;
unsigned int var_18 = 225034412U;
int var_19 = -930417792;
void init() {
}

void checksum() {
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
