#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 3003294905603675646LL;
short var_1 = (short)-21400;
int var_3 = -1668378255;
unsigned char var_4 = (unsigned char)208;
int var_5 = -632024004;
long long int var_6 = 5525389524408653530LL;
_Bool var_7 = (_Bool)1;
long long int var_8 = 2837853835304799468LL;
long long int var_10 = 15188744362038569LL;
int zero = 0;
short var_11 = (short)-27181;
signed char var_12 = (signed char)28;
int var_13 = -526196603;
unsigned int var_14 = 2635648055U;
unsigned int var_15 = 1700583795U;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
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
