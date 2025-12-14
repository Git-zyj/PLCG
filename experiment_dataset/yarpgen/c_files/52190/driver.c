#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-9981;
unsigned short var_2 = (unsigned short)44172;
signed char var_3 = (signed char)15;
unsigned short var_4 = (unsigned short)43426;
long long int var_5 = 5951206621674652461LL;
int var_6 = -267330804;
unsigned int var_7 = 1271865814U;
unsigned short var_9 = (unsigned short)51536;
signed char var_10 = (signed char)97;
unsigned short var_11 = (unsigned short)42340;
unsigned char var_12 = (unsigned char)215;
int zero = 0;
unsigned long long int var_13 = 16193534557623705334ULL;
short var_14 = (short)299;
int var_15 = -944116478;
long long int var_16 = 2644016094708361583LL;
int var_17 = -980879340;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
