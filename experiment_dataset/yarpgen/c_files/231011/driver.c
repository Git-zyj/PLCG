#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)11326;
_Bool var_3 = (_Bool)0;
long long int var_4 = -6179143503852930433LL;
unsigned int var_6 = 3548371154U;
int zero = 0;
long long int var_11 = 3082819912777697821LL;
short var_12 = (short)-20269;
short var_13 = (short)-31527;
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
