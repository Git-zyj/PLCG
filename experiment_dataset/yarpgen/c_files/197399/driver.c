#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
unsigned long long int var_2 = 9432598846454460799ULL;
unsigned short var_3 = (unsigned short)64399;
unsigned char var_4 = (unsigned char)229;
int var_5 = 336573221;
long long int var_6 = 251031920364832869LL;
unsigned long long int var_11 = 3070509147534303690ULL;
int zero = 0;
short var_12 = (short)4246;
unsigned short var_13 = (unsigned short)63932;
unsigned char var_14 = (unsigned char)191;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
