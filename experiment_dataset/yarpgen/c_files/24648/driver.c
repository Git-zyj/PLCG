#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 7876978797601758240LL;
unsigned int var_6 = 3308846174U;
long long int var_11 = -4060387569936992801LL;
unsigned char var_18 = (unsigned char)18;
unsigned int var_19 = 877588581U;
int zero = 0;
unsigned int var_20 = 4166617600U;
unsigned char var_21 = (unsigned char)139;
unsigned int var_22 = 1565858862U;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
