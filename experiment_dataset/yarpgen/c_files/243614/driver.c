#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_4 = (unsigned short)52827;
short var_8 = (short)-28817;
signed char var_9 = (signed char)-108;
unsigned long long int var_18 = 15199637942381483247ULL;
int zero = 0;
unsigned char var_19 = (unsigned char)212;
unsigned long long int var_20 = 13031225147299973298ULL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
