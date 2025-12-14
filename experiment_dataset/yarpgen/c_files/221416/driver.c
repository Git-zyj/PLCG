#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1205179227;
unsigned int var_4 = 1322904891U;
_Bool var_5 = (_Bool)0;
int var_6 = -1900510471;
short var_7 = (short)-25787;
int var_8 = -76958162;
long long int var_10 = 1786038008406086889LL;
short var_11 = (short)28816;
short var_12 = (short)13319;
unsigned long long int var_13 = 6049788201244803104ULL;
unsigned int var_17 = 1076787031U;
int zero = 0;
unsigned long long int var_19 = 6420145177074831810ULL;
unsigned short var_20 = (unsigned short)60240;
unsigned short var_21 = (unsigned short)43428;
int var_22 = -536348298;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
