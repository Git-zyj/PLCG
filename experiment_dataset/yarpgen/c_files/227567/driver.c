#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 2548879964U;
unsigned long long int var_4 = 984526508186588447ULL;
int var_11 = 250093304;
long long int var_12 = -8074082914305251065LL;
int zero = 0;
int var_13 = 868422411;
long long int var_14 = 3646916254124867686LL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
