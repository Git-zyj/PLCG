#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 5395462107568966598ULL;
long long int var_3 = 7515265252620210610LL;
unsigned char var_5 = (unsigned char)11;
unsigned int var_9 = 688960312U;
unsigned int var_10 = 2002957952U;
signed char var_11 = (signed char)-108;
int zero = 0;
unsigned int var_12 = 875396163U;
unsigned char var_13 = (unsigned char)117;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
