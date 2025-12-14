#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_4 = (signed char)-49;
unsigned int var_5 = 2819122008U;
signed char var_8 = (signed char)-40;
_Bool var_9 = (_Bool)0;
_Bool var_11 = (_Bool)0;
unsigned short var_15 = (unsigned short)48230;
int zero = 0;
unsigned long long int var_16 = 7842863057198459614ULL;
unsigned char var_17 = (unsigned char)175;
unsigned char var_18 = (unsigned char)142;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
