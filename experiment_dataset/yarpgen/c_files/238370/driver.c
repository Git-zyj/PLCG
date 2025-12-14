#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -7327721516632492230LL;
signed char var_2 = (signed char)-52;
long long int var_3 = -863068289880717426LL;
unsigned short var_8 = (unsigned short)23156;
unsigned int var_9 = 2949038211U;
int zero = 0;
unsigned char var_10 = (unsigned char)97;
unsigned char var_11 = (unsigned char)108;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
