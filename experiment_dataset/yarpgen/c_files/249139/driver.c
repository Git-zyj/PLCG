#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-102;
long long int var_2 = -1261381654358899505LL;
int var_4 = 353270419;
signed char var_5 = (signed char)35;
short var_6 = (short)32598;
signed char var_9 = (signed char)-122;
unsigned short var_10 = (unsigned short)50366;
int zero = 0;
long long int var_13 = -1717686932378367340LL;
signed char var_14 = (signed char)-82;
unsigned long long int var_15 = 10375916099618398483ULL;
signed char var_16 = (signed char)34;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
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
