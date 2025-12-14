#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)32;
short var_2 = (short)318;
unsigned short var_6 = (unsigned short)6361;
short var_7 = (short)14247;
long long int var_8 = -6451206936255346324LL;
signed char var_9 = (signed char)-113;
int zero = 0;
short var_11 = (short)24801;
long long int var_12 = -4179256254881319446LL;
long long int var_13 = 3548712415149874995LL;
long long int var_14 = -6367414466996040146LL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
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
