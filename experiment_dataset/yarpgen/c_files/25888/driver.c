#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_6 = 2843627972U;
unsigned short var_8 = (unsigned short)23878;
unsigned char var_11 = (unsigned char)27;
unsigned char var_12 = (unsigned char)191;
int zero = 0;
short var_16 = (short)-26309;
int var_17 = 289421802;
short var_18 = (short)14832;
unsigned char var_19 = (unsigned char)117;
long long int var_20 = 854507511294368460LL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
