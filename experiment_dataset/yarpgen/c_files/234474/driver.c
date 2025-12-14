#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 393230761;
unsigned char var_1 = (unsigned char)226;
_Bool var_7 = (_Bool)0;
int var_8 = 2057669218;
long long int var_10 = -437738730772042272LL;
short var_11 = (short)22167;
short var_12 = (short)1048;
int zero = 0;
unsigned int var_15 = 3997004550U;
unsigned long long int var_16 = 2353909771917603976ULL;
void init() {
}

void checksum() {
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
