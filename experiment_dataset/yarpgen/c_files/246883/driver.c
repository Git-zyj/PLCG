#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)19591;
unsigned char var_2 = (unsigned char)92;
_Bool var_3 = (_Bool)1;
long long int var_4 = 5173317740052564092LL;
unsigned char var_5 = (unsigned char)53;
short var_8 = (short)-22872;
int var_9 = 1796547010;
int var_10 = -406118817;
unsigned char var_12 = (unsigned char)209;
long long int var_13 = -667411503838595509LL;
short var_14 = (short)-21530;
unsigned char var_16 = (unsigned char)187;
int zero = 0;
_Bool var_18 = (_Bool)1;
unsigned short var_19 = (unsigned short)4319;
unsigned char var_20 = (unsigned char)244;
int var_21 = -1118485440;
long long int var_22 = -3185004394827921891LL;
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
