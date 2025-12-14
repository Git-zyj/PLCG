#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)42;
short var_4 = (short)26054;
unsigned char var_10 = (unsigned char)183;
int var_11 = 82943221;
unsigned short var_12 = (unsigned short)40581;
unsigned char var_13 = (unsigned char)181;
long long int var_14 = -8958246481444695749LL;
long long int var_16 = 7876310392299165411LL;
int zero = 0;
short var_17 = (short)-10963;
unsigned long long int var_18 = 1247190721090799818ULL;
signed char var_19 = (signed char)-47;
void init() {
}

void checksum() {
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
