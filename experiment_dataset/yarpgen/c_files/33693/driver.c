#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_6 = 5652861214130078903LL;
int var_9 = 1653124245;
unsigned int var_14 = 3288517519U;
int zero = 0;
unsigned int var_16 = 2979286683U;
short var_17 = (short)20011;
unsigned int var_18 = 1386407814U;
int var_19 = -545811054;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
