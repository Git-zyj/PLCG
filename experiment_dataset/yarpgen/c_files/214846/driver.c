#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 8450803072897170887LL;
unsigned char var_2 = (unsigned char)130;
unsigned long long int var_3 = 1529660358217861137ULL;
unsigned short var_4 = (unsigned short)34;
_Bool var_10 = (_Bool)1;
int zero = 0;
unsigned int var_15 = 3086562218U;
long long int var_16 = -4894061873078802881LL;
unsigned int var_17 = 1670481457U;
signed char var_18 = (signed char)-16;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
