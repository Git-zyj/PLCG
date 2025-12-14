#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 10929775129621096090ULL;
unsigned short var_1 = (unsigned short)40449;
int var_5 = 585172814;
int zero = 0;
unsigned int var_12 = 3686312564U;
signed char var_13 = (signed char)83;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
