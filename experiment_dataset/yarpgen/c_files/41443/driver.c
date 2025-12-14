#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -623201961;
unsigned long long int var_2 = 3329229385299543251ULL;
unsigned int var_3 = 1070103305U;
unsigned short var_6 = (unsigned short)5617;
int var_7 = -1613273347;
unsigned short var_8 = (unsigned short)25531;
short var_9 = (short)3023;
int var_10 = -946903096;
unsigned int var_13 = 1366707062U;
long long int var_14 = 3817510107887617285LL;
signed char var_17 = (signed char)8;
int zero = 0;
short var_18 = (short)-30548;
unsigned char var_19 = (unsigned char)71;
int var_20 = 820717597;
long long int var_21 = 6791611185869266990LL;
unsigned short var_22 = (unsigned short)45470;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
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
