#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
short var_1 = (short)-2759;
long long int var_3 = -7587776411614240355LL;
short var_4 = (short)13617;
_Bool var_6 = (_Bool)1;
unsigned char var_9 = (unsigned char)162;
short var_10 = (short)4597;
_Bool var_11 = (_Bool)1;
int zero = 0;
unsigned long long int var_13 = 1206668057936941303ULL;
unsigned char var_14 = (unsigned char)238;
unsigned short var_15 = (unsigned short)32291;
short var_16 = (short)10265;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
