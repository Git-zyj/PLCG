#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 8081676575371442350ULL;
short var_1 = (short)32450;
int var_2 = -70992544;
unsigned short var_5 = (unsigned short)60054;
_Bool var_6 = (_Bool)0;
unsigned int var_9 = 1364003846U;
unsigned short var_10 = (unsigned short)33938;
signed char var_11 = (signed char)-31;
unsigned long long int var_12 = 13075988663866395963ULL;
_Bool var_13 = (_Bool)0;
int zero = 0;
unsigned long long int var_14 = 4266282257453926790ULL;
short var_15 = (short)-32452;
unsigned short var_16 = (unsigned short)29386;
unsigned long long int var_17 = 13462815014504035879ULL;
_Bool var_18 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
