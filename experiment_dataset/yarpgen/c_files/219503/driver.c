#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 313431271U;
unsigned long long int var_6 = 2320952845294957013ULL;
unsigned short var_8 = (unsigned short)1766;
int var_9 = -2022534267;
int var_12 = -1780243491;
_Bool var_16 = (_Bool)0;
unsigned short var_17 = (unsigned short)49763;
int zero = 0;
unsigned short var_19 = (unsigned short)37560;
_Bool var_20 = (_Bool)0;
long long int var_21 = -303589675894740251LL;
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
