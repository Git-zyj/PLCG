#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 785845116326696610ULL;
unsigned int var_6 = 1839063142U;
unsigned short var_7 = (unsigned short)55223;
unsigned long long int var_14 = 946311436520934387ULL;
int zero = 0;
unsigned short var_15 = (unsigned short)60133;
unsigned char var_16 = (unsigned char)79;
void init() {
}

void checksum() {
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
