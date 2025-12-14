#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-9;
unsigned char var_2 = (unsigned char)63;
signed char var_6 = (signed char)33;
int zero = 0;
long long int var_17 = 2537746990056654690LL;
unsigned char var_18 = (unsigned char)219;
long long int var_19 = -6508603724627911479LL;
signed char var_20 = (signed char)115;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
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
