#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_5 = 643987325U;
unsigned long long int var_6 = 8745880340850379628ULL;
unsigned char var_8 = (unsigned char)7;
unsigned char var_9 = (unsigned char)147;
long long int var_11 = 7027393875224303518LL;
int zero = 0;
unsigned long long int var_20 = 9873699895546118634ULL;
unsigned int var_21 = 2633350143U;
unsigned int var_22 = 2182111094U;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
