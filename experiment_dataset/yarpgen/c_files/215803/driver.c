#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 251408348;
int var_2 = -1872866140;
unsigned char var_3 = (unsigned char)198;
short var_8 = (short)17651;
short var_10 = (short)8649;
int zero = 0;
short var_12 = (short)-13945;
long long int var_13 = 3903654242858190042LL;
unsigned long long int var_14 = 7279806891032114747ULL;
unsigned long long int var_15 = 3436967927434179486ULL;
unsigned long long int var_16 = 3035958461500714742ULL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
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
