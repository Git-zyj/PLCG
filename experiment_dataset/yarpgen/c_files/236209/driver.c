#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_5 = (signed char)75;
short var_8 = (short)-31;
signed char var_14 = (signed char)82;
int zero = 0;
unsigned int var_18 = 1715811748U;
unsigned int var_19 = 1244391071U;
long long int var_20 = 6428742755613507804LL;
unsigned char var_21 = (unsigned char)22;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
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
