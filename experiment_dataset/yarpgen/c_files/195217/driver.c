#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)145;
unsigned char var_11 = (unsigned char)111;
unsigned long long int var_13 = 8479364957911776457ULL;
unsigned long long int var_14 = 6675415370444455773ULL;
signed char var_16 = (signed char)-59;
int zero = 0;
int var_17 = -264482233;
unsigned char var_18 = (unsigned char)157;
int var_19 = -1471151769;
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
