#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-16768;
unsigned long long int var_2 = 4860994392875215160ULL;
short var_7 = (short)-7074;
unsigned char var_8 = (unsigned char)10;
int var_10 = -1461114138;
signed char var_12 = (signed char)32;
signed char var_16 = (signed char)-11;
int zero = 0;
long long int var_18 = -962086486238662731LL;
long long int var_19 = -2462262647708236427LL;
void init() {
}

void checksum() {
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
