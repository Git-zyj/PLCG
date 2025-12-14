#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 2128168723;
unsigned long long int var_8 = 2572885956696317139ULL;
unsigned char var_9 = (unsigned char)19;
signed char var_10 = (signed char)48;
int var_11 = 1019301322;
unsigned int var_12 = 431015429U;
long long int var_15 = -3876359117347121717LL;
int zero = 0;
unsigned long long int var_17 = 15643546504194925007ULL;
unsigned char var_18 = (unsigned char)120;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
