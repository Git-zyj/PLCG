#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)22262;
unsigned short var_1 = (unsigned short)51284;
unsigned short var_2 = (unsigned short)2156;
unsigned short var_3 = (unsigned short)52233;
unsigned short var_7 = (unsigned short)53907;
unsigned short var_8 = (unsigned short)19608;
unsigned short var_11 = (unsigned short)41587;
unsigned short var_12 = (unsigned short)17177;
unsigned short var_13 = (unsigned short)29060;
unsigned short var_14 = (unsigned short)47552;
unsigned short var_15 = (unsigned short)39833;
unsigned short var_16 = (unsigned short)65474;
unsigned short var_17 = (unsigned short)4201;
unsigned short var_18 = (unsigned short)38196;
int zero = 0;
signed char var_19 = (signed char)-61;
unsigned short var_20 = (unsigned short)52556;
unsigned short var_21 = (unsigned short)39697;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
