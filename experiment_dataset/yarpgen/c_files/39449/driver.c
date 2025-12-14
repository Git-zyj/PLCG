#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 590530560665474057ULL;
long long int var_3 = 478565963572845377LL;
unsigned int var_4 = 3073857519U;
int var_10 = 51553795;
short var_14 = (short)-30370;
short var_15 = (short)-24806;
_Bool var_19 = (_Bool)0;
int zero = 0;
unsigned char var_20 = (unsigned char)40;
short var_21 = (short)-8420;
long long int var_22 = -7713405066105715368LL;
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
