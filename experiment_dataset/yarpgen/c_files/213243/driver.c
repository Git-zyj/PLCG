#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_8 = 921901001839008564ULL;
short var_11 = (short)3553;
signed char var_12 = (signed char)-69;
int zero = 0;
signed char var_13 = (signed char)72;
unsigned long long int var_14 = 10135005372149853838ULL;
void init() {
}

void checksum() {
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
