#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned long long int var_1 = 6836367598284404774ULL;
unsigned int var_3 = 277567999U;
unsigned int var_7 = 1878187286U;
unsigned short var_9 = (unsigned short)16959;
int var_15 = -1359040958;
unsigned long long int var_18 = 3943312666212219845ULL;
int zero = 0;
int var_20 = -265184208;
signed char var_21 = (signed char)113;
long long int var_22 = 5788460680973583654LL;
unsigned short var_23 = (unsigned short)32759;
unsigned long long int var_24 = 16258712475881319441ULL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
