#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)31341;
_Bool var_4 = (_Bool)1;
unsigned char var_5 = (unsigned char)51;
short var_11 = (short)-7767;
unsigned short var_13 = (unsigned short)61126;
short var_14 = (short)-19810;
_Bool var_15 = (_Bool)0;
signed char var_16 = (signed char)35;
unsigned short var_17 = (unsigned short)64665;
short var_18 = (short)-31169;
int zero = 0;
unsigned long long int var_20 = 15913073196347354230ULL;
unsigned long long int var_21 = 13572495569073618161ULL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
