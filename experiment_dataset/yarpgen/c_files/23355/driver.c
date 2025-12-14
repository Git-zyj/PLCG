#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)98;
int var_5 = 1277623536;
short var_6 = (short)-13110;
unsigned int var_7 = 4021393414U;
short var_8 = (short)-14034;
signed char var_9 = (signed char)41;
int zero = 0;
signed char var_10 = (signed char)-47;
signed char var_11 = (signed char)-100;
_Bool var_12 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
