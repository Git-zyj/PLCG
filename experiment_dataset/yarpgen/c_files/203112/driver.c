#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3534397742U;
unsigned long long int var_1 = 13295364199948709864ULL;
unsigned short var_3 = (unsigned short)37281;
unsigned short var_5 = (unsigned short)16739;
short var_7 = (short)16395;
short var_8 = (short)20619;
unsigned int var_9 = 2187780667U;
int zero = 0;
unsigned int var_11 = 1634569079U;
_Bool var_12 = (_Bool)0;
unsigned char var_13 = (unsigned char)203;
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
