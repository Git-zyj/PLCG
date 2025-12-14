#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)49;
signed char var_3 = (signed char)121;
signed char var_7 = (signed char)92;
int zero = 0;
unsigned long long int var_10 = 3661761140882169624ULL;
int var_11 = 955928143;
unsigned int var_12 = 810944206U;
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
