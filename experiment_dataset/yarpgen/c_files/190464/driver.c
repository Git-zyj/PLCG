#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)1;
long long int var_7 = -6725285085987502586LL;
unsigned long long int var_12 = 847310253788592633ULL;
unsigned char var_14 = (unsigned char)123;
int zero = 0;
signed char var_19 = (signed char)102;
long long int var_20 = -1613523565663460597LL;
long long int var_21 = -4286630059020596964LL;
void init() {
}

void checksum() {
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
