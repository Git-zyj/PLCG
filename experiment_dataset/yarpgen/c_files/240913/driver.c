#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)247;
long long int var_5 = -2063614441695656877LL;
unsigned char var_6 = (unsigned char)172;
unsigned char var_7 = (unsigned char)56;
short var_8 = (short)-11577;
unsigned short var_9 = (unsigned short)38587;
signed char var_10 = (signed char)53;
unsigned short var_11 = (unsigned short)46108;
unsigned char var_16 = (unsigned char)12;
int zero = 0;
signed char var_18 = (signed char)85;
unsigned char var_19 = (unsigned char)113;
int var_20 = -2113387154;
signed char var_21 = (signed char)-106;
short var_22 = (short)-19559;
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
