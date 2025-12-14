#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_5 = 3395420145U;
unsigned short var_7 = (unsigned short)36545;
unsigned int var_9 = 3557272755U;
unsigned long long int var_10 = 4219595082140913722ULL;
signed char var_12 = (signed char)-2;
long long int var_17 = -7145570984377852933LL;
unsigned long long int var_18 = 14262106512878069073ULL;
int zero = 0;
unsigned char var_19 = (unsigned char)217;
unsigned long long int var_20 = 5500022174000066756ULL;
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
