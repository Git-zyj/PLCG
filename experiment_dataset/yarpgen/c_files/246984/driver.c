#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_6 = (signed char)-107;
_Bool var_9 = (_Bool)0;
unsigned long long int var_10 = 14577345686420406698ULL;
signed char var_11 = (signed char)16;
_Bool var_13 = (_Bool)0;
int var_14 = 555945025;
signed char var_16 = (signed char)35;
int zero = 0;
long long int var_20 = -8438922370724559616LL;
int var_21 = -433921783;
unsigned char var_22 = (unsigned char)148;
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
