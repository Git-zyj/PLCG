#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 6594841927303620559ULL;
unsigned long long int var_4 = 14467801821874825984ULL;
signed char var_5 = (signed char)121;
unsigned int var_10 = 534621249U;
int zero = 0;
unsigned long long int var_11 = 1994607762216126061ULL;
int var_12 = -1642539818;
void init() {
}

void checksum() {
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
