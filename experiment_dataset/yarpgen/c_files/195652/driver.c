#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)54389;
unsigned char var_5 = (unsigned char)51;
unsigned long long int var_6 = 15801099289193198904ULL;
unsigned int var_7 = 2785803498U;
_Bool var_10 = (_Bool)0;
unsigned short var_12 = (unsigned short)46342;
short var_13 = (short)-30849;
long long int var_14 = 524870782823289903LL;
int zero = 0;
unsigned short var_16 = (unsigned short)39563;
signed char var_17 = (signed char)-33;
short var_18 = (short)11520;
_Bool var_19 = (_Bool)1;
void init() {
}

void checksum() {
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
