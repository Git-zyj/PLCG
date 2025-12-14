#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)15902;
unsigned char var_2 = (unsigned char)102;
unsigned char var_6 = (unsigned char)167;
unsigned char var_8 = (unsigned char)75;
unsigned int var_11 = 3092510187U;
int zero = 0;
int var_13 = 655352917;
_Bool var_14 = (_Bool)1;
unsigned char var_15 = (unsigned char)170;
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
