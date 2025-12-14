#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = -1826757948433253184LL;
long long int var_6 = -4373082432315115862LL;
_Bool var_8 = (_Bool)0;
unsigned short var_10 = (unsigned short)58086;
unsigned int var_12 = 2595822983U;
int zero = 0;
_Bool var_20 = (_Bool)0;
unsigned long long int var_21 = 16666503639999053613ULL;
unsigned int var_22 = 1573685527U;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
