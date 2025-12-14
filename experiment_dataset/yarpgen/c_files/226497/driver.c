#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-8;
unsigned char var_1 = (unsigned char)164;
signed char var_4 = (signed char)62;
signed char var_10 = (signed char)-44;
unsigned long long int var_11 = 16430464771813971108ULL;
unsigned char var_12 = (unsigned char)15;
unsigned char var_13 = (unsigned char)120;
int zero = 0;
unsigned char var_14 = (unsigned char)93;
unsigned int var_15 = 3915304230U;
signed char var_16 = (signed char)-93;
int var_17 = 1600844923;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
