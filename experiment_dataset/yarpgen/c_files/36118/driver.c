#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 21815881U;
unsigned long long int var_1 = 13294010113355969792ULL;
unsigned char var_2 = (unsigned char)124;
unsigned long long int var_3 = 5415100215253337906ULL;
short var_4 = (short)-20165;
unsigned int var_6 = 4030335672U;
unsigned long long int var_13 = 7289246716102396617ULL;
_Bool var_17 = (_Bool)0;
int zero = 0;
long long int var_19 = 1226472181482490573LL;
_Bool var_20 = (_Bool)0;
unsigned char var_21 = (unsigned char)100;
short var_22 = (short)32093;
void init() {
}

void checksum() {
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
