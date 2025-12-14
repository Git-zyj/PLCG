#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-82;
unsigned long long int var_1 = 3174490781845691889ULL;
short var_3 = (short)-28661;
unsigned int var_8 = 2063254142U;
unsigned int var_17 = 2815438349U;
int zero = 0;
signed char var_18 = (signed char)78;
short var_19 = (short)20951;
short var_20 = (short)11889;
void init() {
}

void checksum() {
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
