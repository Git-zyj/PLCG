#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -8607880117665056166LL;
unsigned long long int var_3 = 15519265011669086508ULL;
unsigned long long int var_5 = 8017940053573931891ULL;
unsigned char var_12 = (unsigned char)29;
short var_17 = (short)-30908;
int zero = 0;
unsigned long long int var_18 = 7725461916991127325ULL;
signed char var_19 = (signed char)-12;
long long int var_20 = -8902341927140333980LL;
short var_21 = (short)-27248;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
