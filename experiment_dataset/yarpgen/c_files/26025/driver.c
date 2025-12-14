#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)251;
unsigned long long int var_6 = 3691216397290115870ULL;
unsigned char var_9 = (unsigned char)13;
long long int var_11 = -3855799434107661391LL;
unsigned char var_13 = (unsigned char)36;
int zero = 0;
signed char var_17 = (signed char)-13;
short var_18 = (short)2861;
unsigned char var_19 = (unsigned char)61;
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
