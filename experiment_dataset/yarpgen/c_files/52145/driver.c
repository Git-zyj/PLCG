#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_10 = 8868478016794617270ULL;
int var_12 = 1150632873;
int zero = 0;
long long int var_14 = 2210598729570310694LL;
signed char var_15 = (signed char)93;
long long int var_16 = 4909545898387902790LL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
