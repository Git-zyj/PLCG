#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)117;
unsigned long long int var_2 = 5771681340112251829ULL;
short var_3 = (short)4863;
unsigned short var_6 = (unsigned short)7563;
int var_8 = -1241269141;
short var_10 = (short)-8574;
short var_11 = (short)27698;
unsigned char var_14 = (unsigned char)46;
unsigned int var_16 = 2670491894U;
int zero = 0;
unsigned long long int var_19 = 6371651062381871486ULL;
short var_20 = (short)-15569;
int var_21 = 648904598;
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
