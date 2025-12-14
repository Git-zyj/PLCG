#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)5133;
unsigned char var_2 = (unsigned char)155;
unsigned long long int var_8 = 5871171756328963558ULL;
unsigned short var_9 = (unsigned short)60509;
unsigned long long int var_12 = 10505917755523269603ULL;
int zero = 0;
unsigned long long int var_14 = 14504171436440715631ULL;
unsigned char var_15 = (unsigned char)100;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
