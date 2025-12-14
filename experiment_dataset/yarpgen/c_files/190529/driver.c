#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)40;
unsigned long long int var_2 = 9056785175177976583ULL;
unsigned long long int var_3 = 2137372151068514649ULL;
long long int var_4 = 1588996640022157707LL;
_Bool var_6 = (_Bool)1;
unsigned long long int var_7 = 2393890300695770573ULL;
int var_8 = 346929232;
_Bool var_9 = (_Bool)0;
short var_10 = (short)10631;
unsigned char var_12 = (unsigned char)52;
unsigned char var_13 = (unsigned char)131;
unsigned char var_14 = (unsigned char)252;
int zero = 0;
int var_15 = 1029313738;
unsigned char var_16 = (unsigned char)152;
long long int var_17 = -8752193503441629093LL;
unsigned short var_18 = (unsigned short)42740;
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
