#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)50;
unsigned long long int var_3 = 2842038711995561830ULL;
_Bool var_4 = (_Bool)0;
unsigned char var_5 = (unsigned char)242;
unsigned int var_6 = 50367894U;
int var_8 = -1924583889;
unsigned long long int var_10 = 3588474166406305376ULL;
int zero = 0;
_Bool var_14 = (_Bool)1;
unsigned char var_15 = (unsigned char)82;
unsigned char var_16 = (unsigned char)229;
long long int var_17 = -5242508902743416472LL;
short var_18 = (short)-19154;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
