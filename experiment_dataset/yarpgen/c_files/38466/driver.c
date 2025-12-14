#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_7 = (signed char)-118;
int var_8 = 1045301147;
_Bool var_12 = (_Bool)1;
short var_13 = (short)-30792;
unsigned char var_14 = (unsigned char)232;
int zero = 0;
unsigned short var_17 = (unsigned short)19494;
_Bool var_18 = (_Bool)0;
int var_19 = 1167646862;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
