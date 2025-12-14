#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_7 = (_Bool)0;
unsigned long long int var_8 = 18149814173936413535ULL;
unsigned int var_9 = 2816014958U;
long long int var_12 = -6422377725030787928LL;
_Bool var_13 = (_Bool)1;
int zero = 0;
unsigned char var_15 = (unsigned char)226;
_Bool var_16 = (_Bool)0;
unsigned long long int var_17 = 2419029246101564545ULL;
int var_18 = 1123640725;
signed char var_19 = (signed char)-71;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
