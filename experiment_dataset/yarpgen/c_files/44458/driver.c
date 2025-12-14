#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -5749398913335529448LL;
_Bool var_6 = (_Bool)0;
unsigned long long int var_7 = 13435347512762046803ULL;
unsigned long long int var_9 = 13334246107377075507ULL;
int var_11 = -1273696532;
unsigned int var_12 = 50790521U;
signed char var_13 = (signed char)69;
int zero = 0;
long long int var_16 = 5385677700348295938LL;
unsigned long long int var_17 = 5621919672373622710ULL;
int var_18 = 1351073429;
long long int var_19 = 226092839989389683LL;
void init() {
}

void checksum() {
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
