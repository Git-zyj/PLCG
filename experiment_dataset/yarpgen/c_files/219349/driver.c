#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 3706383094882088081ULL;
unsigned int var_1 = 1722580255U;
long long int var_2 = -2530792733928266865LL;
long long int var_3 = -57809447712755108LL;
short var_4 = (short)-19289;
unsigned int var_5 = 1582391344U;
unsigned short var_6 = (unsigned short)52927;
unsigned char var_7 = (unsigned char)168;
long long int var_8 = -5079720517669156314LL;
unsigned int var_9 = 910924812U;
short var_10 = (short)5405;
int zero = 0;
short var_11 = (short)11078;
short var_12 = (short)25343;
unsigned short var_13 = (unsigned short)47626;
signed char var_14 = (signed char)-33;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
