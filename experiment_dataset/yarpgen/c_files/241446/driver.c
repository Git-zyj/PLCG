#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -6884367845422863876LL;
unsigned short var_4 = (unsigned short)59606;
unsigned char var_5 = (unsigned char)84;
signed char var_7 = (signed char)-48;
unsigned char var_8 = (unsigned char)31;
short var_10 = (short)-10289;
int zero = 0;
short var_12 = (short)10449;
signed char var_13 = (signed char)112;
signed char var_14 = (signed char)-14;
unsigned short var_15 = (unsigned short)57913;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
