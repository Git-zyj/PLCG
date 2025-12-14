#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 672312712;
unsigned char var_4 = (unsigned char)208;
unsigned long long int var_7 = 17094350531175892321ULL;
unsigned short var_10 = (unsigned short)4923;
int zero = 0;
_Bool var_12 = (_Bool)0;
long long int var_13 = 3650544392630671418LL;
unsigned long long int var_14 = 3070514036956252118ULL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
