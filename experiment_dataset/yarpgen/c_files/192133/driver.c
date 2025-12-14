#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 4653607523802999705LL;
unsigned int var_3 = 938204521U;
unsigned char var_9 = (unsigned char)50;
long long int var_10 = 1674718067100486236LL;
_Bool var_11 = (_Bool)1;
int zero = 0;
signed char var_20 = (signed char)-106;
long long int var_21 = 8386486445348965900LL;
int var_22 = 2044615441;
int var_23 = -1033990693;
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
