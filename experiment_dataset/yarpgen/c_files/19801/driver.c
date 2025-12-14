#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 6616719984533264925ULL;
unsigned long long int var_3 = 8616305483610838787ULL;
unsigned short var_4 = (unsigned short)58295;
short var_5 = (short)15169;
unsigned long long int var_7 = 1553215121169023160ULL;
unsigned short var_9 = (unsigned short)38540;
int zero = 0;
_Bool var_10 = (_Bool)1;
_Bool var_11 = (_Bool)0;
unsigned long long int var_12 = 9987490438310631858ULL;
unsigned int var_13 = 3421309932U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
