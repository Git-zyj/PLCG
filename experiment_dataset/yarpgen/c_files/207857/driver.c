#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -645669050;
unsigned int var_1 = 3087638606U;
unsigned long long int var_3 = 10412967407324215123ULL;
unsigned long long int var_5 = 3918928726290583518ULL;
short var_6 = (short)20223;
int var_8 = -1263222077;
unsigned long long int var_9 = 198796010340246810ULL;
unsigned char var_10 = (unsigned char)104;
short var_11 = (short)1418;
short var_13 = (short)1475;
short var_14 = (short)-27211;
short var_15 = (short)-30408;
short var_18 = (short)13120;
int zero = 0;
unsigned long long int var_19 = 15239111055467007440ULL;
unsigned long long int var_20 = 16826277772372193508ULL;
unsigned char var_21 = (unsigned char)146;
unsigned char var_22 = (unsigned char)236;
void init() {
}

void checksum() {
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
