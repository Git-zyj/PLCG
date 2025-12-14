#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 3376824042200947726LL;
unsigned int var_2 = 1417274839U;
unsigned long long int var_11 = 6146120514318788340ULL;
int zero = 0;
short var_13 = (short)32325;
unsigned char var_14 = (unsigned char)182;
signed char var_15 = (signed char)30;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
