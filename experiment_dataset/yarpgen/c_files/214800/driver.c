#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -3181699898658378813LL;
signed char var_7 = (signed char)-69;
unsigned char var_12 = (unsigned char)222;
signed char var_15 = (signed char)36;
int zero = 0;
long long int var_16 = -5601113965881942864LL;
long long int var_17 = 6739482981305449851LL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
