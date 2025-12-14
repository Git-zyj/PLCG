#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)4245;
unsigned char var_7 = (unsigned char)122;
int var_11 = -670802;
int zero = 0;
_Bool var_13 = (_Bool)0;
unsigned int var_14 = 232220725U;
unsigned int var_15 = 944934379U;
void init() {
}

void checksum() {
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
