#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)83;
unsigned short var_5 = (unsigned short)34894;
unsigned char var_6 = (unsigned char)229;
signed char var_7 = (signed char)21;
long long int var_8 = 115246521511244264LL;
int var_9 = 1224717539;
signed char var_13 = (signed char)102;
_Bool var_14 = (_Bool)0;
int zero = 0;
int var_15 = -1192754333;
int var_16 = 50229669;
signed char var_17 = (signed char)-41;
void init() {
}

void checksum() {
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
