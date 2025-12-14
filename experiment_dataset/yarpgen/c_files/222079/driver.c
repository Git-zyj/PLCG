#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 12301535466983711596ULL;
signed char var_5 = (signed char)-55;
_Bool var_6 = (_Bool)0;
unsigned int var_10 = 2177978473U;
int zero = 0;
unsigned int var_11 = 343990462U;
unsigned char var_12 = (unsigned char)247;
unsigned short var_13 = (unsigned short)24321;
void init() {
}

void checksum() {
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
