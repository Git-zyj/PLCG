#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-21457;
long long int var_1 = -1119588759488132588LL;
unsigned int var_2 = 3077297282U;
unsigned int var_3 = 2715593024U;
unsigned short var_5 = (unsigned short)21479;
int zero = 0;
unsigned char var_10 = (unsigned char)240;
signed char var_11 = (signed char)15;
unsigned long long int var_12 = 2351157454184499434ULL;
unsigned short var_13 = (unsigned short)38761;
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
