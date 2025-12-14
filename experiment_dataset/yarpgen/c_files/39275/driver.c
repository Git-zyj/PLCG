#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
unsigned short var_4 = (unsigned short)40046;
unsigned int var_6 = 1705410774U;
unsigned short var_8 = (unsigned short)32750;
signed char var_9 = (signed char)34;
unsigned short var_10 = (unsigned short)6124;
_Bool var_11 = (_Bool)0;
unsigned int var_13 = 4221480108U;
short var_14 = (short)-8663;
int zero = 0;
unsigned long long int var_15 = 6241983200731309302ULL;
_Bool var_16 = (_Bool)0;
short var_17 = (short)20867;
unsigned long long int var_18 = 12705340287264927059ULL;
unsigned long long int var_19 = 3676972070005899430ULL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
