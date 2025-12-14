#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 446174540U;
unsigned int var_2 = 832031159U;
signed char var_5 = (signed char)-25;
unsigned int var_6 = 869270962U;
signed char var_9 = (signed char)38;
signed char var_10 = (signed char)12;
unsigned char var_14 = (unsigned char)17;
unsigned short var_15 = (unsigned short)65300;
int zero = 0;
long long int var_16 = -4333519249637414181LL;
_Bool var_17 = (_Bool)0;
unsigned char var_18 = (unsigned char)69;
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
