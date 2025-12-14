#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 8565503252891353275LL;
int var_3 = -1373575702;
int var_5 = 807444377;
int var_11 = 1018531854;
int zero = 0;
_Bool var_14 = (_Bool)0;
int var_15 = -132690870;
signed char var_16 = (signed char)108;
unsigned char var_17 = (unsigned char)238;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
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
