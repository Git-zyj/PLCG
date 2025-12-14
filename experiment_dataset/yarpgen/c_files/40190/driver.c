#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1625698942;
signed char var_2 = (signed char)67;
int var_3 = -980268658;
_Bool var_4 = (_Bool)1;
int var_5 = -74122699;
long long int var_6 = -8455942629241447307LL;
_Bool var_8 = (_Bool)1;
int zero = 0;
int var_10 = 336863853;
unsigned char var_11 = (unsigned char)246;
_Bool var_12 = (_Bool)0;
_Bool var_13 = (_Bool)0;
signed char var_14 = (signed char)97;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
