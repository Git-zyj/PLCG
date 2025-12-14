#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)50;
unsigned long long int var_1 = 12045473483561729814ULL;
unsigned short var_2 = (unsigned short)7812;
unsigned char var_13 = (unsigned char)111;
int zero = 0;
signed char var_14 = (signed char)(-127 - 1);
signed char var_15 = (signed char)77;
int var_16 = -547156895;
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
