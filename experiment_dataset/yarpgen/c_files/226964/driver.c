#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -7953201093188354846LL;
_Bool var_2 = (_Bool)0;
_Bool var_5 = (_Bool)0;
signed char var_9 = (signed char)-36;
unsigned char var_10 = (unsigned char)142;
long long int var_11 = -2706160491999558363LL;
long long int var_12 = -5814493343081387081LL;
int zero = 0;
_Bool var_13 = (_Bool)0;
signed char var_14 = (signed char)-17;
_Bool var_15 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
