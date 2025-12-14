#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 6313952314619454944ULL;
int var_1 = -351434379;
long long int var_3 = 3849875911098342394LL;
unsigned int var_6 = 877285166U;
unsigned char var_9 = (unsigned char)42;
_Bool var_14 = (_Bool)0;
signed char var_17 = (signed char)23;
_Bool var_18 = (_Bool)0;
int zero = 0;
signed char var_19 = (signed char)121;
int var_20 = 1242939289;
int var_21 = 61894762;
_Bool var_22 = (_Bool)0;
signed char var_23 = (signed char)-123;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
