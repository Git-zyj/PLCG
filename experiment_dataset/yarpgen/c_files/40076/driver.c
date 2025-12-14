#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-84;
unsigned long long int var_10 = 2437548084196916562ULL;
unsigned long long int var_15 = 9914247851012978933ULL;
short var_19 = (short)10343;
int zero = 0;
_Bool var_20 = (_Bool)1;
unsigned char var_21 = (unsigned char)60;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
