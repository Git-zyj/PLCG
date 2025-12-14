#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-15295;
int var_3 = -1619491840;
unsigned int var_4 = 637214671U;
signed char var_5 = (signed char)106;
_Bool var_9 = (_Bool)1;
unsigned char var_11 = (unsigned char)56;
short var_12 = (short)-17436;
unsigned int var_13 = 3657900066U;
signed char var_14 = (signed char)-112;
int zero = 0;
unsigned long long int var_15 = 3233103515829232842ULL;
long long int var_16 = 8243076597030774367LL;
void init() {
}

void checksum() {
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
