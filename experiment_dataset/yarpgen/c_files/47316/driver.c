#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 17347695837958961170ULL;
signed char var_6 = (signed char)25;
unsigned char var_7 = (unsigned char)9;
signed char var_11 = (signed char)-4;
unsigned short var_12 = (unsigned short)20457;
unsigned short var_13 = (unsigned short)11673;
long long int var_15 = 3363447160044292587LL;
int var_16 = 1712963336;
int zero = 0;
signed char var_18 = (signed char)11;
unsigned int var_19 = 988891432U;
_Bool var_20 = (_Bool)1;
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
