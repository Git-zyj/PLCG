#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_9 = 14116021108704382141ULL;
int var_11 = -1393433520;
_Bool var_17 = (_Bool)1;
int zero = 0;
signed char var_20 = (signed char)76;
unsigned long long int var_21 = 14913254892698441532ULL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
