#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 2563072667U;
unsigned int var_4 = 1942040742U;
unsigned long long int var_7 = 3502639386518799520ULL;
short var_8 = (short)-13540;
unsigned int var_10 = 2839833753U;
int zero = 0;
signed char var_12 = (signed char)15;
_Bool var_13 = (_Bool)0;
void init() {
}

void checksum() {
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
