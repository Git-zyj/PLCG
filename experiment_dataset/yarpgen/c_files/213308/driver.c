#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 6683833947616058123ULL;
long long int var_2 = -7763556281393604318LL;
long long int var_4 = 6675008553254196521LL;
signed char var_7 = (signed char)89;
long long int var_9 = -5182752634595686231LL;
int zero = 0;
unsigned int var_10 = 2924436435U;
unsigned int var_11 = 3400139345U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
