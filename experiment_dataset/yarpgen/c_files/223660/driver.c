#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_5 = -3079570530621667891LL;
unsigned long long int var_12 = 3740602409913302949ULL;
int zero = 0;
short var_13 = (short)6186;
_Bool var_14 = (_Bool)0;
unsigned char var_15 = (unsigned char)126;
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
