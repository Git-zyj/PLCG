#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)110;
unsigned int var_2 = 3188853456U;
signed char var_4 = (signed char)63;
unsigned char var_6 = (unsigned char)237;
int var_8 = -1226869191;
unsigned short var_9 = (unsigned short)46285;
int zero = 0;
unsigned int var_11 = 138562381U;
unsigned long long int var_12 = 5336148121205266849ULL;
unsigned short var_13 = (unsigned short)53819;
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
