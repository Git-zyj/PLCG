#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)31263;
unsigned long long int var_3 = 10177359199510152999ULL;
unsigned char var_6 = (unsigned char)220;
unsigned short var_7 = (unsigned short)28264;
unsigned char var_8 = (unsigned char)10;
int var_9 = 1519737920;
unsigned int var_15 = 1399562313U;
unsigned short var_17 = (unsigned short)50566;
int zero = 0;
unsigned char var_19 = (unsigned char)92;
short var_20 = (short)29514;
signed char var_21 = (signed char)-126;
long long int var_22 = -8980415582637684914LL;
unsigned char var_23 = (unsigned char)205;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
