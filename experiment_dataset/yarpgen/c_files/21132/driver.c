#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 15882464780336881836ULL;
unsigned long long int var_5 = 12410183505081277812ULL;
unsigned char var_6 = (unsigned char)59;
unsigned int var_7 = 1411996168U;
unsigned short var_8 = (unsigned short)65264;
unsigned short var_13 = (unsigned short)26671;
unsigned char var_15 = (unsigned char)130;
unsigned int var_16 = 2057296178U;
int zero = 0;
short var_17 = (short)27051;
unsigned char var_18 = (unsigned char)253;
unsigned char var_19 = (unsigned char)138;
unsigned long long int var_20 = 4271543676825961120ULL;
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
