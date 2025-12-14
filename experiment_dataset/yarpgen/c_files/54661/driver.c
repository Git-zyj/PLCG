#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)38522;
unsigned long long int var_4 = 7321609003846049279ULL;
unsigned short var_6 = (unsigned short)39299;
long long int var_10 = -3834168367160752413LL;
unsigned short var_13 = (unsigned short)49354;
unsigned short var_15 = (unsigned short)30236;
unsigned char var_16 = (unsigned char)201;
_Bool var_19 = (_Bool)1;
int zero = 0;
short var_20 = (short)25922;
unsigned short var_21 = (unsigned short)64582;
unsigned char var_22 = (unsigned char)45;
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
