#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 674869592;
int var_1 = -544963566;
unsigned long long int var_2 = 15253783189695035265ULL;
short var_3 = (short)-19158;
unsigned int var_4 = 2201546836U;
unsigned long long int var_5 = 2300420043439534348ULL;
unsigned int var_6 = 2438166127U;
int var_7 = 1541143879;
long long int var_8 = 7983700036126664938LL;
int zero = 0;
unsigned int var_12 = 3422348459U;
unsigned short var_13 = (unsigned short)2628;
short var_14 = (short)-26943;
int var_15 = -1195019969;
signed char var_16 = (signed char)-106;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
