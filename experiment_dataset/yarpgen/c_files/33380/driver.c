#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)2072;
unsigned int var_2 = 1420630461U;
short var_3 = (short)-9252;
_Bool var_7 = (_Bool)1;
signed char var_9 = (signed char)59;
unsigned char var_12 = (unsigned char)8;
int var_16 = -114305864;
int zero = 0;
unsigned long long int var_18 = 1763934698945933707ULL;
unsigned char var_19 = (unsigned char)8;
int var_20 = -642903263;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
