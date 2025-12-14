#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)55608;
unsigned long long int var_1 = 7335386874982193536ULL;
long long int var_2 = 1045038281335669457LL;
int var_3 = 1764955855;
unsigned char var_4 = (unsigned char)149;
unsigned long long int var_5 = 12458218683288036235ULL;
long long int var_6 = -2955479808624460273LL;
long long int var_7 = -8888499003034834974LL;
unsigned short var_9 = (unsigned short)6374;
unsigned short var_10 = (unsigned short)31002;
unsigned short var_11 = (unsigned short)27873;
int zero = 0;
unsigned short var_12 = (unsigned short)25030;
unsigned char var_13 = (unsigned char)81;
int var_14 = 652617579;
int var_15 = -109810830;
unsigned int var_16 = 2876748421U;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
