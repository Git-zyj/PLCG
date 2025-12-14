#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_8 = (short)-22804;
short var_12 = (short)-13820;
short var_13 = (short)22591;
short var_15 = (short)9264;
int zero = 0;
unsigned short var_16 = (unsigned short)25516;
long long int var_17 = 4907915317146604718LL;
unsigned long long int var_18 = 9571976135906546383ULL;
unsigned short var_19 = (unsigned short)40258;
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
