#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)28296;
unsigned long long int var_5 = 13997139571397758541ULL;
int var_8 = 169490275;
signed char var_16 = (signed char)-104;
int zero = 0;
int var_20 = -416851804;
signed char var_21 = (signed char)96;
unsigned int var_22 = 101795565U;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
