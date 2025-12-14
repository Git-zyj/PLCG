#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)71;
unsigned char var_1 = (unsigned char)139;
unsigned long long int var_10 = 9621408694726928851ULL;
_Bool var_11 = (_Bool)0;
unsigned char var_12 = (unsigned char)55;
unsigned short var_13 = (unsigned short)57214;
_Bool var_15 = (_Bool)0;
int zero = 0;
unsigned char var_20 = (unsigned char)49;
unsigned long long int var_21 = 4245364141625158283ULL;
unsigned short var_22 = (unsigned short)21515;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
