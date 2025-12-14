#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-19479;
unsigned char var_2 = (unsigned char)255;
unsigned int var_4 = 1431218420U;
unsigned int var_6 = 702452012U;
unsigned int var_7 = 3130182662U;
signed char var_8 = (signed char)-34;
long long int var_10 = 3321741363941749298LL;
unsigned long long int var_14 = 1655107991461214085ULL;
int zero = 0;
signed char var_15 = (signed char)75;
unsigned char var_16 = (unsigned char)181;
unsigned short var_17 = (unsigned short)7987;
long long int var_18 = -2846770725107534563LL;
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
