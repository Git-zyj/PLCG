#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-44;
signed char var_1 = (signed char)64;
_Bool var_2 = (_Bool)0;
long long int var_3 = 7235377918122841891LL;
int var_4 = 818951331;
unsigned short var_5 = (unsigned short)62044;
unsigned int var_6 = 1070618943U;
int var_8 = 1389105325;
int var_9 = 467894945;
unsigned short var_11 = (unsigned short)5106;
int zero = 0;
int var_12 = -877250294;
unsigned char var_13 = (unsigned char)92;
int var_14 = 1578811744;
int var_15 = -165941954;
long long int var_16 = -444277150803695426LL;
int var_17 = 590609090;
_Bool var_18 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
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
