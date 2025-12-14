#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)61;
signed char var_6 = (signed char)-84;
signed char var_8 = (signed char)96;
unsigned int var_11 = 935491855U;
short var_16 = (short)-29830;
int zero = 0;
signed char var_20 = (signed char)15;
long long int var_21 = 7115685600271653640LL;
unsigned char var_22 = (unsigned char)108;
unsigned long long int var_23 = 3070013600290848756ULL;
long long int var_24 = -6714671271762462894LL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
