#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)203;
signed char var_6 = (signed char)21;
signed char var_8 = (signed char)-112;
int zero = 0;
short var_10 = (short)27706;
short var_11 = (short)6030;
unsigned char var_12 = (unsigned char)63;
long long int var_13 = 2752242316441458289LL;
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
