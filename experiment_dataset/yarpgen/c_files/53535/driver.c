#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -514534540497642861LL;
unsigned char var_1 = (unsigned char)39;
unsigned int var_2 = 1001283379U;
unsigned int var_5 = 1664709278U;
unsigned char var_8 = (unsigned char)68;
unsigned long long int var_12 = 13671867770995238941ULL;
unsigned short var_14 = (unsigned short)39519;
unsigned int var_15 = 568138374U;
long long int var_16 = 9212856778589898849LL;
unsigned int var_17 = 1831532435U;
int zero = 0;
unsigned short var_18 = (unsigned short)55749;
unsigned int var_19 = 1261350618U;
unsigned long long int var_20 = 8033336725022163238ULL;
unsigned short var_21 = (unsigned short)32137;
short var_22 = (short)2897;
unsigned int var_23 = 93352879U;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
