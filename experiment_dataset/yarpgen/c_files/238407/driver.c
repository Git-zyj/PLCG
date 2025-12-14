#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = -2411994244377051886LL;
long long int var_5 = 7412917342935906016LL;
unsigned int var_7 = 1342308204U;
long long int var_9 = 2262735021468575189LL;
unsigned short var_10 = (unsigned short)57027;
unsigned long long int var_11 = 2044467957704995774ULL;
long long int var_18 = -2741586713662570301LL;
int zero = 0;
long long int var_19 = -6343577248776758244LL;
_Bool var_20 = (_Bool)1;
long long int var_21 = 4403777236394631848LL;
unsigned long long int var_22 = 14109610112848692341ULL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
