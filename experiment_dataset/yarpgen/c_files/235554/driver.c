#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = 2064413906;
signed char var_5 = (signed char)77;
long long int var_7 = 6819510871491977611LL;
signed char var_8 = (signed char)111;
signed char var_10 = (signed char)-84;
unsigned char var_11 = (unsigned char)208;
unsigned long long int var_12 = 4945544986587533377ULL;
signed char var_14 = (signed char)6;
int zero = 0;
unsigned long long int var_15 = 15257030750378782120ULL;
signed char var_16 = (signed char)-78;
_Bool var_17 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
