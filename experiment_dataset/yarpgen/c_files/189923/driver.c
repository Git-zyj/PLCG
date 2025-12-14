#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1895611098U;
unsigned char var_3 = (unsigned char)26;
unsigned int var_4 = 3348935914U;
unsigned long long int var_6 = 9718047881956538930ULL;
unsigned char var_9 = (unsigned char)108;
unsigned int var_11 = 3664622043U;
unsigned long long int var_12 = 3206210061188609097ULL;
unsigned int var_13 = 3236373082U;
unsigned char var_14 = (unsigned char)162;
unsigned short var_15 = (unsigned short)53889;
short var_16 = (short)-4049;
_Bool var_19 = (_Bool)1;
int zero = 0;
_Bool var_20 = (_Bool)1;
_Bool var_21 = (_Bool)1;
unsigned short var_22 = (unsigned short)27724;
int var_23 = 2102564516;
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
