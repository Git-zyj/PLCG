#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)1;
int var_6 = -624870462;
unsigned int var_7 = 3656617849U;
_Bool var_8 = (_Bool)0;
unsigned char var_10 = (unsigned char)1;
unsigned long long int var_14 = 4416477732788381829ULL;
int zero = 0;
unsigned long long int var_16 = 8320866796162699732ULL;
_Bool var_17 = (_Bool)1;
unsigned long long int var_18 = 6141983164591330374ULL;
int var_19 = 548263844;
unsigned char var_20 = (unsigned char)88;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
