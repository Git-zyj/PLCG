#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 17416579322029158144ULL;
unsigned short var_5 = (unsigned short)17759;
unsigned short var_6 = (unsigned short)55946;
unsigned char var_7 = (unsigned char)22;
_Bool var_8 = (_Bool)1;
int var_10 = -1952014021;
unsigned char var_14 = (unsigned char)173;
unsigned int var_15 = 648672777U;
signed char var_16 = (signed char)-67;
int zero = 0;
signed char var_18 = (signed char)-112;
_Bool var_19 = (_Bool)1;
unsigned int var_20 = 274107874U;
unsigned char var_21 = (unsigned char)199;
signed char var_22 = (signed char)-124;
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
