#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)27871;
unsigned int var_3 = 3790667419U;
signed char var_5 = (signed char)51;
unsigned int var_8 = 418525746U;
int zero = 0;
long long int var_11 = 8275957782552228382LL;
unsigned long long int var_12 = 16193357068721448009ULL;
short var_13 = (short)26582;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
