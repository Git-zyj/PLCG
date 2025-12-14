#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)146;
unsigned int var_5 = 2522163763U;
signed char var_6 = (signed char)-12;
int var_14 = -1602826114;
unsigned short var_15 = (unsigned short)16235;
unsigned int var_16 = 2258314790U;
int zero = 0;
unsigned short var_18 = (unsigned short)28799;
short var_19 = (short)-10282;
unsigned int var_20 = 3647112144U;
unsigned int var_21 = 2162341331U;
short var_22 = (short)-12274;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
