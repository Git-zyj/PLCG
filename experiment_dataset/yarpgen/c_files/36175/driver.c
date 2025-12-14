#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 15510304275152070146ULL;
unsigned short var_1 = (unsigned short)64334;
unsigned short var_3 = (unsigned short)63790;
unsigned short var_4 = (unsigned short)20400;
unsigned short var_5 = (unsigned short)467;
unsigned short var_6 = (unsigned short)45558;
unsigned long long int var_8 = 14508288041606246894ULL;
unsigned long long int var_9 = 15254362527519396546ULL;
unsigned long long int var_11 = 9505358354650586959ULL;
unsigned long long int var_12 = 7643406961682493201ULL;
unsigned short var_13 = (unsigned short)18112;
unsigned long long int var_14 = 14383071690143597493ULL;
unsigned short var_16 = (unsigned short)10493;
int zero = 0;
unsigned short var_17 = (unsigned short)55465;
unsigned short var_18 = (unsigned short)31879;
unsigned long long int var_19 = 13767039854761055470ULL;
unsigned short var_20 = (unsigned short)64735;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
