#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 958710642U;
signed char var_2 = (signed char)(-127 - 1);
unsigned long long int var_3 = 4337001255222017233ULL;
unsigned short var_4 = (unsigned short)11713;
short var_5 = (short)-21126;
short var_8 = (short)26221;
int zero = 0;
_Bool var_11 = (_Bool)1;
short var_12 = (short)17695;
unsigned char var_13 = (unsigned char)154;
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
