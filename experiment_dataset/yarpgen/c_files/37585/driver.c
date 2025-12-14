#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 1286214939039617436ULL;
signed char var_1 = (signed char)-58;
unsigned char var_3 = (unsigned char)37;
unsigned short var_5 = (unsigned short)30383;
unsigned int var_6 = 4183165977U;
short var_7 = (short)-10201;
long long int var_8 = -1066435842154720796LL;
unsigned short var_9 = (unsigned short)63411;
int zero = 0;
int var_11 = 764195424;
signed char var_12 = (signed char)82;
signed char var_13 = (signed char)-83;
short var_14 = (short)11472;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
