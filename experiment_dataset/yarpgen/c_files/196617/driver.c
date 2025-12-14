#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-13675;
short var_4 = (short)-7104;
unsigned char var_6 = (unsigned char)181;
unsigned long long int var_8 = 1575650706809487257ULL;
int var_10 = -285896745;
_Bool var_14 = (_Bool)0;
int zero = 0;
unsigned char var_16 = (unsigned char)112;
unsigned char var_17 = (unsigned char)76;
_Bool var_18 = (_Bool)0;
int var_19 = 574958557;
_Bool var_20 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
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
