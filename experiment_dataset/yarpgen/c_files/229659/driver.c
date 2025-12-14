#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 12569038552074610331ULL;
unsigned int var_6 = 1902882789U;
_Bool var_10 = (_Bool)0;
unsigned short var_16 = (unsigned short)12442;
int zero = 0;
long long int var_19 = 8200566745499173529LL;
unsigned int var_20 = 3938911498U;
signed char var_21 = (signed char)-58;
short var_22 = (short)28244;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
