#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)27041;
unsigned char var_4 = (unsigned char)204;
unsigned long long int var_8 = 10630099477135795940ULL;
unsigned short var_13 = (unsigned short)34757;
int zero = 0;
signed char var_15 = (signed char)31;
signed char var_16 = (signed char)-127;
unsigned short var_17 = (unsigned short)7662;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
