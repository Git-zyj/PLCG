#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned char var_1 = (unsigned char)88;
signed char var_3 = (signed char)17;
unsigned char var_4 = (unsigned char)41;
signed char var_5 = (signed char)-91;
signed char var_9 = (signed char)-123;
unsigned long long int var_10 = 4050716282224106525ULL;
int zero = 0;
unsigned int var_11 = 2134697580U;
unsigned long long int var_12 = 644916744737234486ULL;
_Bool var_13 = (_Bool)1;
signed char var_14 = (signed char)-1;
void init() {
}

void checksum() {
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
