#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 7792815062300043098LL;
unsigned long long int var_8 = 14696699271279697832ULL;
unsigned int var_12 = 918619670U;
unsigned short var_13 = (unsigned short)28983;
int zero = 0;
signed char var_16 = (signed char)52;
unsigned long long int var_17 = 11644104438196149707ULL;
unsigned char var_18 = (unsigned char)165;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
