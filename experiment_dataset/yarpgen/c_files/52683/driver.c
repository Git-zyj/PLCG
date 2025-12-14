#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 162820541U;
unsigned char var_1 = (unsigned char)72;
unsigned char var_3 = (unsigned char)32;
unsigned long long int var_4 = 14079087808496094918ULL;
unsigned long long int var_9 = 10192332718662295948ULL;
int var_14 = 1661585900;
int zero = 0;
_Bool var_19 = (_Bool)1;
unsigned int var_20 = 3891203716U;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
