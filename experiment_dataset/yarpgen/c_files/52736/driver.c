#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3806713339U;
signed char var_2 = (signed char)-114;
_Bool var_3 = (_Bool)1;
unsigned long long int var_5 = 3419116851176037751ULL;
short var_9 = (short)6969;
int zero = 0;
unsigned char var_10 = (unsigned char)156;
unsigned long long int var_11 = 8912453203947435494ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
