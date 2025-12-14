#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)17671;
unsigned short var_3 = (unsigned short)10531;
unsigned int var_8 = 1243946880U;
unsigned short var_13 = (unsigned short)15643;
int zero = 0;
_Bool var_16 = (_Bool)1;
unsigned int var_17 = 1708049848U;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
