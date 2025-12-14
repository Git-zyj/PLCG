#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-27291;
_Bool var_3 = (_Bool)0;
signed char var_4 = (signed char)68;
signed char var_5 = (signed char)107;
_Bool var_14 = (_Bool)1;
short var_18 = (short)-17189;
int zero = 0;
short var_20 = (short)18807;
unsigned long long int var_21 = 9531593924086200632ULL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
