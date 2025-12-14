#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)121;
unsigned long long int var_5 = 15888661267522372825ULL;
unsigned long long int var_12 = 5214384376965435267ULL;
int zero = 0;
unsigned char var_17 = (unsigned char)236;
int var_18 = -874554545;
unsigned short var_19 = (unsigned short)18580;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
