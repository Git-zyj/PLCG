#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)150;
unsigned int var_6 = 2812756138U;
short var_8 = (short)19085;
_Bool var_10 = (_Bool)1;
unsigned int var_12 = 1024797748U;
int zero = 0;
long long int var_13 = 8161386226972178058LL;
signed char var_14 = (signed char)104;
unsigned long long int var_15 = 14648356702454255788ULL;
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
