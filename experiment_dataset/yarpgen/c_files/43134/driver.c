#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_4 = (unsigned char)110;
signed char var_6 = (signed char)-95;
unsigned short var_7 = (unsigned short)12112;
unsigned char var_11 = (unsigned char)10;
unsigned short var_12 = (unsigned short)11669;
int zero = 0;
unsigned long long int var_13 = 14020004782654707358ULL;
signed char var_14 = (signed char)117;
void init() {
}

void checksum() {
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
