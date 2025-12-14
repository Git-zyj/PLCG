#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -163027247;
short var_3 = (short)-1782;
int var_5 = -2080571150;
_Bool var_6 = (_Bool)0;
int var_11 = -1191925473;
unsigned int var_13 = 2955283433U;
int zero = 0;
int var_16 = -389896967;
unsigned long long int var_17 = 1511113748240554455ULL;
unsigned int var_18 = 2792924751U;
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
