#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-18791;
short var_3 = (short)9373;
unsigned long long int var_4 = 14314501512261835493ULL;
unsigned char var_7 = (unsigned char)47;
unsigned short var_8 = (unsigned short)25953;
unsigned short var_10 = (unsigned short)31525;
short var_11 = (short)8048;
short var_12 = (short)28599;
unsigned short var_13 = (unsigned short)59253;
int zero = 0;
signed char var_16 = (signed char)-44;
unsigned short var_17 = (unsigned short)46921;
long long int var_18 = -4631185477792797501LL;
_Bool var_19 = (_Bool)1;
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
