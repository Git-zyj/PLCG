#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_5 = (unsigned char)18;
long long int var_8 = -8965312458470374776LL;
int var_9 = 363017672;
short var_10 = (short)-21466;
signed char var_11 = (signed char)-105;
signed char var_13 = (signed char)109;
int zero = 0;
unsigned char var_14 = (unsigned char)50;
long long int var_15 = 8496603950891928595LL;
unsigned short var_16 = (unsigned short)49722;
void init() {
}

void checksum() {
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
