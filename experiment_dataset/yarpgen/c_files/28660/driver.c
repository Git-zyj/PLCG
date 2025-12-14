#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 11426626640913819325ULL;
short var_3 = (short)15015;
unsigned long long int var_4 = 1186825063530905042ULL;
signed char var_6 = (signed char)0;
unsigned char var_10 = (unsigned char)137;
short var_12 = (short)27520;
int zero = 0;
_Bool var_17 = (_Bool)1;
unsigned int var_18 = 2179613575U;
void init() {
}

void checksum() {
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
