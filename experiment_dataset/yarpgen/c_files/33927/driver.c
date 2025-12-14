#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)99;
unsigned short var_1 = (unsigned short)26382;
unsigned long long int var_2 = 8730509332512692851ULL;
unsigned int var_4 = 3648220968U;
short var_6 = (short)23370;
unsigned int var_7 = 1448226875U;
signed char var_8 = (signed char)84;
unsigned short var_10 = (unsigned short)40898;
int zero = 0;
long long int var_12 = 5468158101472349900LL;
short var_13 = (short)30370;
_Bool var_14 = (_Bool)0;
signed char var_15 = (signed char)25;
unsigned int var_16 = 1363202945U;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
