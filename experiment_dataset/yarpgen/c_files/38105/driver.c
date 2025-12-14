#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 14667817050004711178ULL;
unsigned long long int var_5 = 17946919630328076050ULL;
signed char var_8 = (signed char)28;
int var_9 = -480639254;
int zero = 0;
_Bool var_10 = (_Bool)1;
long long int var_11 = -1805738444829664869LL;
unsigned long long int var_12 = 8627957386364389774ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
