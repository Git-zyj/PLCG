#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_4 = 1685695059;
unsigned long long int var_6 = 284018120515503085ULL;
unsigned long long int var_8 = 12910601031273532148ULL;
unsigned long long int var_11 = 5047299893423849665ULL;
unsigned long long int var_13 = 8844884961250655852ULL;
int zero = 0;
signed char var_20 = (signed char)83;
unsigned char var_21 = (unsigned char)253;
unsigned long long int var_22 = 15287625972452116663ULL;
signed char var_23 = (signed char)-45;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
