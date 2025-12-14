#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_5 = 3816439287U;
long long int var_7 = -7468400608656634571LL;
long long int var_8 = 6223532113530320635LL;
unsigned long long int var_11 = 14116069663378615060ULL;
int zero = 0;
short var_13 = (short)5352;
signed char var_14 = (signed char)-12;
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
