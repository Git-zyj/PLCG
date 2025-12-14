#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-44;
unsigned char var_3 = (unsigned char)158;
long long int var_5 = 2081391950042315251LL;
long long int var_6 = -6754407787474169620LL;
unsigned char var_7 = (unsigned char)24;
signed char var_10 = (signed char)-115;
unsigned char var_11 = (unsigned char)37;
int var_12 = 887741939;
short var_15 = (short)-11528;
short var_19 = (short)-22581;
int zero = 0;
unsigned char var_20 = (unsigned char)143;
unsigned char var_21 = (unsigned char)121;
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
