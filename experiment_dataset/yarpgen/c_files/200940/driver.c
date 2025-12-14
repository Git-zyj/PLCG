#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)66;
unsigned short var_3 = (unsigned short)25639;
short var_8 = (short)-28613;
unsigned int var_12 = 3412855832U;
long long int var_13 = 2064801797639189852LL;
int zero = 0;
signed char var_14 = (signed char)-30;
unsigned int var_15 = 208628574U;
unsigned char var_16 = (unsigned char)65;
unsigned int var_17 = 2284587663U;
long long int var_18 = 3427416901333805548LL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
