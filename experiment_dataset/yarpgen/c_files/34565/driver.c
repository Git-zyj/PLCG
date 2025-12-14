#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)29203;
unsigned int var_1 = 2525865544U;
int var_2 = 814383821;
unsigned short var_3 = (unsigned short)60677;
unsigned short var_5 = (unsigned short)34003;
_Bool var_7 = (_Bool)0;
unsigned short var_9 = (unsigned short)16557;
unsigned char var_10 = (unsigned char)125;
signed char var_11 = (signed char)-48;
int zero = 0;
unsigned char var_12 = (unsigned char)21;
unsigned int var_13 = 2382638990U;
int var_14 = -1348091896;
unsigned short var_15 = (unsigned short)12324;
unsigned char var_16 = (unsigned char)145;
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
