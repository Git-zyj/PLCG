#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned short var_1 = (unsigned short)37365;
unsigned short var_2 = (unsigned short)46877;
unsigned int var_5 = 316526815U;
short var_6 = (short)-10749;
signed char var_8 = (signed char)76;
unsigned char var_10 = (unsigned char)224;
unsigned long long int var_11 = 7711548198398428206ULL;
int zero = 0;
unsigned int var_13 = 4020480269U;
_Bool var_14 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
