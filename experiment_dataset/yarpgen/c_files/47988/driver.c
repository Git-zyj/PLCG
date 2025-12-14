#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_6 = 11158058062482926740ULL;
_Bool var_9 = (_Bool)0;
signed char var_10 = (signed char)55;
_Bool var_12 = (_Bool)1;
unsigned short var_15 = (unsigned short)53318;
int zero = 0;
short var_16 = (short)12542;
unsigned short var_17 = (unsigned short)37318;
unsigned char var_18 = (unsigned char)15;
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
