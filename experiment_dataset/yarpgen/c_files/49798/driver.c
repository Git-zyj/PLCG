#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -1018885756562605109LL;
long long int var_1 = -6085796520763770737LL;
long long int var_3 = 1612987100095372914LL;
unsigned char var_4 = (unsigned char)246;
unsigned char var_6 = (unsigned char)73;
long long int var_8 = -5785322011752821102LL;
int zero = 0;
unsigned char var_10 = (unsigned char)0;
long long int var_11 = -2770626918955035039LL;
long long int var_12 = 549679552714829526LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
