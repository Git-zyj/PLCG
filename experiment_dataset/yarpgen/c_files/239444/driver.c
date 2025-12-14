#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-2646;
unsigned long long int var_3 = 9004416567703183113ULL;
unsigned char var_10 = (unsigned char)217;
_Bool var_11 = (_Bool)0;
long long int var_12 = 1039898463479355769LL;
unsigned short var_16 = (unsigned short)58619;
short var_18 = (short)-2078;
int zero = 0;
int var_19 = -633380396;
unsigned long long int var_20 = 12000550258928055029ULL;
short var_21 = (short)15792;
void init() {
}

void checksum() {
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
