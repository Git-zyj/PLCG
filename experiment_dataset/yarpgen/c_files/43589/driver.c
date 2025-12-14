#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1277248709U;
unsigned short var_2 = (unsigned short)14500;
signed char var_6 = (signed char)4;
unsigned short var_7 = (unsigned short)19395;
short var_8 = (short)-26956;
unsigned short var_10 = (unsigned short)42867;
unsigned long long int var_12 = 1300493403294853913ULL;
unsigned char var_14 = (unsigned char)18;
unsigned char var_16 = (unsigned char)195;
int zero = 0;
_Bool var_19 = (_Bool)0;
unsigned long long int var_20 = 10755611578412591082ULL;
unsigned int var_21 = 689660670U;
unsigned int var_22 = 448778351U;
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
