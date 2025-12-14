#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 901717325;
unsigned int var_4 = 689098236U;
_Bool var_5 = (_Bool)0;
unsigned char var_6 = (unsigned char)71;
int zero = 0;
unsigned long long int var_11 = 12140771131103893795ULL;
unsigned char var_12 = (unsigned char)235;
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
