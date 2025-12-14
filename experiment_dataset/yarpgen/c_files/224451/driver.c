#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)102;
unsigned long long int var_4 = 2965249041171843314ULL;
short var_5 = (short)24047;
signed char var_6 = (signed char)-54;
int var_8 = 1949356275;
int zero = 0;
int var_10 = 2008103233;
int var_11 = 340750273;
signed char var_12 = (signed char)26;
signed char var_13 = (signed char)44;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
