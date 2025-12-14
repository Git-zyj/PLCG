#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 4402485031835939186LL;
unsigned short var_6 = (unsigned short)63942;
unsigned int var_12 = 1884520274U;
short var_13 = (short)26332;
int zero = 0;
unsigned long long int var_16 = 5611598794520533399ULL;
unsigned long long int var_17 = 3816975025170023161ULL;
unsigned char var_18 = (unsigned char)178;
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
