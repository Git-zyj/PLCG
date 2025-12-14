#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)91;
unsigned long long int var_4 = 17929679990138131828ULL;
unsigned char var_6 = (unsigned char)1;
_Bool var_8 = (_Bool)1;
int zero = 0;
unsigned int var_10 = 2601618561U;
short var_11 = (short)26609;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
