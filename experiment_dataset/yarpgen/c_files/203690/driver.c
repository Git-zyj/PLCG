#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -1390180294504343371LL;
unsigned short var_4 = (unsigned short)52634;
unsigned int var_10 = 202163028U;
int zero = 0;
signed char var_19 = (signed char)-90;
unsigned int var_20 = 1747634352U;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
