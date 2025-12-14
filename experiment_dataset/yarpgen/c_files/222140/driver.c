#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 10864266510424737175ULL;
unsigned int var_2 = 1692007155U;
unsigned char var_3 = (unsigned char)100;
unsigned long long int var_5 = 12459612986744230912ULL;
signed char var_6 = (signed char)-37;
unsigned int var_7 = 1698774512U;
int zero = 0;
unsigned long long int var_10 = 10918989400850849678ULL;
short var_11 = (short)-17569;
long long int var_12 = 8313790290298543286LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
