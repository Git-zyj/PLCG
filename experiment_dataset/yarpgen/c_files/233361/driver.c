#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 1066860352;
int var_3 = -468000990;
unsigned short var_6 = (unsigned short)18890;
long long int var_9 = -5629100233435830886LL;
unsigned short var_11 = (unsigned short)43176;
int zero = 0;
unsigned long long int var_16 = 18051204600169905926ULL;
short var_17 = (short)2532;
short var_18 = (short)-189;
unsigned int var_19 = 4040078979U;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
