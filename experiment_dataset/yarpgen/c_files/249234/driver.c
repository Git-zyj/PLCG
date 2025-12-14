#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)215;
unsigned char var_5 = (unsigned char)38;
unsigned long long int var_6 = 17149158884466858422ULL;
long long int var_13 = 438402355173871540LL;
signed char var_15 = (signed char)-127;
unsigned char var_18 = (unsigned char)52;
int zero = 0;
signed char var_20 = (signed char)-65;
unsigned short var_21 = (unsigned short)23828;
signed char var_22 = (signed char)61;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
