#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)0;
unsigned long long int var_3 = 5121886048527021094ULL;
long long int var_4 = -1475833200451251693LL;
signed char var_9 = (signed char)-66;
signed char var_10 = (signed char)22;
int zero = 0;
unsigned char var_11 = (unsigned char)231;
unsigned int var_12 = 2008624404U;
void init() {
}

void checksum() {
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
