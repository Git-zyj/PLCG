#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -1394330240;
unsigned long long int var_3 = 17558558368936448562ULL;
int var_4 = 2111220610;
unsigned int var_11 = 2364338945U;
int zero = 0;
int var_14 = -865775806;
long long int var_15 = -6886139440835134654LL;
_Bool var_16 = (_Bool)0;
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
