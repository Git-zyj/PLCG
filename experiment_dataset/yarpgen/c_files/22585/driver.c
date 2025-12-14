#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)22645;
unsigned long long int var_3 = 341415980148209950ULL;
unsigned short var_4 = (unsigned short)42744;
unsigned long long int var_6 = 10222389080448866632ULL;
unsigned short var_8 = (unsigned short)64111;
signed char var_10 = (signed char)-40;
_Bool var_11 = (_Bool)0;
unsigned long long int var_12 = 16652170803152491203ULL;
int zero = 0;
unsigned long long int var_13 = 568607769696012131ULL;
short var_14 = (short)21568;
signed char var_15 = (signed char)-67;
unsigned long long int var_16 = 717780334000115773ULL;
void init() {
}

void checksum() {
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
