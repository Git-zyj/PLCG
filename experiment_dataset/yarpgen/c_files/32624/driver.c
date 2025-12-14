#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)22343;
unsigned int var_5 = 1937891103U;
_Bool var_8 = (_Bool)1;
int zero = 0;
unsigned int var_10 = 3483310758U;
unsigned long long int var_11 = 16446461631696678101ULL;
unsigned short var_12 = (unsigned short)44806;
unsigned short var_13 = (unsigned short)52761;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
