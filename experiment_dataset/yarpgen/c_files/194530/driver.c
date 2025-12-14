#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 8977350117399652338ULL;
unsigned short var_3 = (unsigned short)63173;
unsigned char var_4 = (unsigned char)131;
unsigned short var_5 = (unsigned short)61318;
unsigned short var_6 = (unsigned short)39014;
unsigned int var_9 = 2246112525U;
int zero = 0;
int var_10 = 1705715975;
unsigned char var_11 = (unsigned char)202;
unsigned long long int var_12 = 5086468382246224957ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
