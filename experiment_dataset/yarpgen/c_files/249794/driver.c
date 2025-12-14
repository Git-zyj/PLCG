#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)47;
unsigned char var_3 = (unsigned char)225;
_Bool var_5 = (_Bool)0;
signed char var_6 = (signed char)45;
int var_7 = -2071307006;
short var_9 = (short)23947;
unsigned char var_11 = (unsigned char)215;
int zero = 0;
signed char var_12 = (signed char)15;
_Bool var_13 = (_Bool)1;
int var_14 = -1390172778;
_Bool var_15 = (_Bool)1;
long long int var_16 = 1931708252310692277LL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
