#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 4071593788747603197ULL;
int var_1 = -9981081;
int var_3 = 1342370128;
unsigned char var_4 = (unsigned char)223;
int var_6 = 1492901349;
unsigned long long int var_7 = 14415777788773362249ULL;
unsigned short var_10 = (unsigned short)21731;
int var_11 = -1303018892;
unsigned int var_12 = 1698782175U;
int var_15 = -997026991;
int var_18 = -1928179275;
long long int var_19 = -3758213210070445093LL;
int zero = 0;
long long int var_20 = -47558224791849550LL;
unsigned long long int var_21 = 2303987638872396541ULL;
int var_22 = 1238846115;
unsigned int var_23 = 2953950767U;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
