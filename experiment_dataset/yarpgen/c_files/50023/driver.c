#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_10 = 7811791806848179484ULL;
unsigned int var_15 = 595245185U;
long long int var_18 = 2024468303642206819LL;
int zero = 0;
short var_19 = (short)12558;
unsigned short var_20 = (unsigned short)41606;
signed char var_21 = (signed char)120;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
