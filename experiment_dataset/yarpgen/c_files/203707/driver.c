#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)98;
long long int var_3 = -4739886543012403735LL;
unsigned char var_5 = (unsigned char)211;
unsigned long long int var_6 = 9407984367031204212ULL;
int var_10 = -1587268010;
int zero = 0;
unsigned long long int var_15 = 11173474246682342036ULL;
signed char var_16 = (signed char)-94;
long long int var_17 = -9095142283846044453LL;
unsigned int var_18 = 3665030407U;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
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
