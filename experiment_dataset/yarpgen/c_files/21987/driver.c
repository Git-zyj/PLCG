#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)1926;
short var_2 = (short)-4642;
unsigned int var_3 = 4294172781U;
unsigned char var_4 = (unsigned char)61;
signed char var_5 = (signed char)105;
_Bool var_7 = (_Bool)1;
signed char var_8 = (signed char)-34;
short var_9 = (short)-15019;
int zero = 0;
int var_10 = -347300936;
_Bool var_11 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
