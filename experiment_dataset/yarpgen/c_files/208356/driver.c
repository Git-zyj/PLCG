#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 16435821795498514875ULL;
short var_1 = (short)21991;
short var_2 = (short)26513;
int var_3 = 185860470;
int var_4 = -850363159;
long long int var_5 = 6640906019882342525LL;
int var_6 = 2115945750;
long long int var_7 = 6444642740040350123LL;
short var_8 = (short)-27335;
unsigned short var_9 = (unsigned short)47301;
_Bool var_10 = (_Bool)1;
int var_11 = -45914924;
unsigned short var_12 = (unsigned short)46396;
unsigned char var_13 = (unsigned char)26;
long long int var_15 = -5017080644573753608LL;
_Bool var_16 = (_Bool)0;
int zero = 0;
unsigned int var_17 = 2959710048U;
int var_18 = 632656864;
unsigned short var_19 = (unsigned short)28456;
unsigned long long int var_20 = 4832832386611607834ULL;
unsigned short var_21 = (unsigned short)49717;
unsigned int var_22 = 1283460945U;
_Bool var_23 = (_Bool)1;
unsigned short var_24 = (unsigned short)62811;
unsigned short var_25 = (unsigned short)21259;
short var_26 = (short)-9897;
unsigned short var_27 = (unsigned short)65534;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
