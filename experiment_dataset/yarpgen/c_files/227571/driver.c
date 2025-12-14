#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 181256607U;
unsigned short var_3 = (unsigned short)6995;
signed char var_4 = (signed char)-68;
unsigned long long int var_6 = 12588092556536010101ULL;
unsigned short var_8 = (unsigned short)14131;
int zero = 0;
long long int var_14 = 4474747451939562725LL;
unsigned short var_15 = (unsigned short)28662;
short var_16 = (short)23451;
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
