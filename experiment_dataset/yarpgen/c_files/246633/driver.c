#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)187;
long long int var_6 = -2561228759227933893LL;
long long int var_7 = -8398047701954582267LL;
signed char var_9 = (signed char)-35;
int zero = 0;
unsigned int var_10 = 1476957722U;
long long int var_11 = 1437695120496176221LL;
unsigned char var_12 = (unsigned char)222;
unsigned int var_13 = 3750166530U;
unsigned int var_14 = 1626787383U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
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
