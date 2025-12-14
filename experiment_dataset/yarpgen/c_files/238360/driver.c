#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_7 = 8347885922905994642ULL;
int var_10 = 1665000889;
long long int var_12 = 4671042492414590817LL;
int zero = 0;
signed char var_14 = (signed char)38;
unsigned short var_15 = (unsigned short)4107;
void init() {
}

void checksum() {
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
