#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)121;
unsigned long long int var_3 = 1577982260882387331ULL;
int var_4 = -1410889888;
short var_5 = (short)23467;
unsigned int var_7 = 2144426389U;
long long int var_9 = 2808919451312433446LL;
int zero = 0;
signed char var_15 = (signed char)-1;
int var_16 = -1014453776;
long long int var_17 = 3882360486530654884LL;
unsigned short var_18 = (unsigned short)52170;
_Bool var_19 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
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
