#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)21086;
unsigned int var_7 = 2532317311U;
unsigned short var_8 = (unsigned short)1256;
int zero = 0;
long long int var_12 = -1882703294544077042LL;
unsigned char var_13 = (unsigned char)118;
int var_14 = -1091182747;
long long int var_15 = 4354622646128678423LL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
