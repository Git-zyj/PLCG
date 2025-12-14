#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = -1511650377;
int var_4 = 228738335;
unsigned char var_5 = (unsigned char)97;
short var_6 = (short)22505;
int zero = 0;
unsigned char var_10 = (unsigned char)26;
_Bool var_11 = (_Bool)0;
signed char var_12 = (signed char)55;
short var_13 = (short)11139;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
