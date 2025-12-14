#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)1;
unsigned char var_4 = (unsigned char)120;
int var_6 = -408809096;
unsigned short var_7 = (unsigned short)40732;
int var_9 = 1129476024;
unsigned long long int var_10 = 686645952074668006ULL;
unsigned char var_12 = (unsigned char)246;
int zero = 0;
signed char var_15 = (signed char)-72;
signed char var_16 = (signed char)4;
unsigned long long int var_17 = 7334655180136513493ULL;
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
