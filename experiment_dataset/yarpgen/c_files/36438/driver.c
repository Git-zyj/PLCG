#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2406927160U;
unsigned int var_2 = 880581577U;
unsigned short var_3 = (unsigned short)42448;
unsigned int var_5 = 1547793306U;
short var_6 = (short)-8997;
unsigned int var_7 = 1174434812U;
_Bool var_9 = (_Bool)0;
int var_13 = 1906539861;
int zero = 0;
unsigned short var_18 = (unsigned short)47662;
unsigned short var_19 = (unsigned short)31773;
unsigned int var_20 = 3342365654U;
int var_21 = 1129739317;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
