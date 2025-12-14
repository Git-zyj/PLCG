#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)9286;
unsigned long long int var_2 = 532713367404563377ULL;
short var_4 = (short)-19529;
unsigned long long int var_5 = 3748440024182200206ULL;
int var_6 = 846941039;
short var_7 = (short)11327;
int var_9 = 1864588528;
int var_13 = 550709398;
signed char var_14 = (signed char)85;
int var_15 = 509288855;
int zero = 0;
long long int var_16 = 5002984271685713193LL;
unsigned char var_17 = (unsigned char)127;
void init() {
}

void checksum() {
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
