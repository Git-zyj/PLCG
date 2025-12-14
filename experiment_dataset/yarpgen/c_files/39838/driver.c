#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_8 = (short)-30454;
_Bool var_9 = (_Bool)1;
long long int var_15 = 3561744930043636722LL;
int var_16 = -1734410877;
int var_18 = 344724932;
int zero = 0;
unsigned char var_19 = (unsigned char)160;
unsigned int var_20 = 4005697685U;
void init() {
}

void checksum() {
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
