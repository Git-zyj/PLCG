#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
long long int var_1 = -8001896716341854859LL;
unsigned char var_7 = (unsigned char)79;
long long int var_8 = -6169353405233375213LL;
signed char var_9 = (signed char)95;
signed char var_11 = (signed char)-29;
int var_12 = 101535408;
int zero = 0;
unsigned char var_13 = (unsigned char)155;
unsigned short var_14 = (unsigned short)61579;
int var_15 = 951818723;
unsigned int var_16 = 1028512768U;
unsigned char var_17 = (unsigned char)2;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
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
