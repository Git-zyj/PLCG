#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-7527;
_Bool var_4 = (_Bool)0;
unsigned long long int var_9 = 9550286647397520910ULL;
short var_17 = (short)-24886;
int zero = 0;
unsigned int var_20 = 1833246219U;
long long int var_21 = 6955159617543103194LL;
unsigned char var_22 = (unsigned char)207;
void init() {
}

void checksum() {
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
