#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-100;
long long int var_3 = -5400244067773098418LL;
short var_7 = (short)-16860;
short var_8 = (short)7247;
unsigned short var_10 = (unsigned short)17081;
long long int var_14 = 1309730492836673604LL;
long long int var_19 = -1502079131924702882LL;
int zero = 0;
unsigned short var_20 = (unsigned short)995;
unsigned char var_21 = (unsigned char)152;
long long int var_22 = 335761590611692818LL;
unsigned short var_23 = (unsigned short)31917;
unsigned short var_24 = (unsigned short)60942;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
