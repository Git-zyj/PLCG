#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 4690552920663108584LL;
unsigned char var_2 = (unsigned char)245;
signed char var_3 = (signed char)1;
signed char var_4 = (signed char)-85;
unsigned char var_7 = (unsigned char)19;
long long int var_8 = 1857067341760922052LL;
unsigned short var_11 = (unsigned short)34400;
unsigned short var_12 = (unsigned short)49066;
short var_14 = (short)-6452;
int zero = 0;
unsigned char var_15 = (unsigned char)156;
int var_16 = -234251831;
signed char var_17 = (signed char)-9;
unsigned short var_18 = (unsigned short)51487;
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
