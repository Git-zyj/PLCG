#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -3985572372925071274LL;
short var_2 = (short)-25501;
unsigned long long int var_3 = 17818095178295480685ULL;
signed char var_8 = (signed char)-26;
int var_12 = -1278962420;
int zero = 0;
unsigned char var_14 = (unsigned char)252;
int var_15 = 2051475318;
int var_16 = 2048976418;
unsigned short var_17 = (unsigned short)29796;
unsigned char var_18 = (unsigned char)136;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
