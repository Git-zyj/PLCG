#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)81;
long long int var_2 = 2576349464882344174LL;
short var_7 = (short)20541;
unsigned int var_8 = 4285466214U;
int zero = 0;
long long int var_10 = -2149048689756885040LL;
short var_11 = (short)10129;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
