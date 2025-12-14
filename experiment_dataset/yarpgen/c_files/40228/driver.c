#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-11565;
unsigned long long int var_1 = 17724379993821767992ULL;
unsigned char var_3 = (unsigned char)103;
long long int var_4 = 5543789822667742473LL;
unsigned short var_7 = (unsigned short)27755;
unsigned long long int var_10 = 2443112266148817672ULL;
int zero = 0;
unsigned short var_14 = (unsigned short)29551;
_Bool var_15 = (_Bool)0;
_Bool var_16 = (_Bool)1;
unsigned char var_17 = (unsigned char)79;
void init() {
}

void checksum() {
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
