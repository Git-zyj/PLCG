#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_5 = -2137953020;
unsigned char var_7 = (unsigned char)130;
short var_8 = (short)10662;
int var_9 = -393938540;
long long int var_11 = 6017996457730165813LL;
int zero = 0;
unsigned long long int var_13 = 8443711616003387629ULL;
_Bool var_14 = (_Bool)1;
short var_15 = (short)27245;
unsigned short var_16 = (unsigned short)14176;
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
