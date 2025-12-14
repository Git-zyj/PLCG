#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = -2372651845786518841LL;
short var_6 = (short)21329;
long long int var_8 = 8813639977176964591LL;
long long int var_10 = -2926359165572056188LL;
unsigned int var_11 = 928989938U;
int zero = 0;
unsigned int var_13 = 2135699551U;
unsigned char var_14 = (unsigned char)197;
long long int var_15 = 4298858772214385662LL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
