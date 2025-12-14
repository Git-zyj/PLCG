#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1679463973U;
unsigned int var_2 = 838295234U;
long long int var_3 = 4771584060971373153LL;
int var_6 = -1907611309;
unsigned short var_7 = (unsigned short)412;
int var_9 = -1838591173;
short var_10 = (short)24607;
unsigned int var_11 = 3493617214U;
unsigned short var_12 = (unsigned short)28756;
int zero = 0;
unsigned char var_14 = (unsigned char)146;
int var_15 = 546414420;
unsigned int var_16 = 1098626151U;
long long int var_17 = 8785461851137790560LL;
long long int var_18 = 2832283626849084002LL;
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
