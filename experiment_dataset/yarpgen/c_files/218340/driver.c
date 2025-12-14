#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_9 = 10905696202490454579ULL;
long long int var_10 = -4855076300249870591LL;
long long int var_17 = 1353563712493140230LL;
int zero = 0;
_Bool var_19 = (_Bool)1;
signed char var_20 = (signed char)83;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
