#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 9713034058067225008ULL;
unsigned long long int var_3 = 4620908864053310587ULL;
unsigned short var_8 = (unsigned short)16854;
int zero = 0;
_Bool var_14 = (_Bool)1;
unsigned long long int var_15 = 16363355524764148595ULL;
unsigned long long int var_16 = 16895524708355237699ULL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
