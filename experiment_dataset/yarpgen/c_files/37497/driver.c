#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 17236867871956636424ULL;
unsigned char var_3 = (unsigned char)249;
short var_6 = (short)22637;
int var_13 = -447792522;
int zero = 0;
unsigned char var_14 = (unsigned char)156;
unsigned int var_15 = 3357629513U;
void init() {
}

void checksum() {
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
