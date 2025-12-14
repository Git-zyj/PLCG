#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -1598389497;
unsigned long long int var_5 = 12878752989363812618ULL;
short var_6 = (short)7170;
unsigned int var_8 = 930658933U;
unsigned long long int var_9 = 10523290761059951404ULL;
long long int var_10 = -1943331819472906696LL;
short var_11 = (short)17430;
unsigned long long int var_12 = 8089917557816632448ULL;
unsigned long long int var_13 = 13220417924805133606ULL;
int zero = 0;
unsigned short var_15 = (unsigned short)52601;
unsigned long long int var_16 = 16617937379570695937ULL;
short var_17 = (short)32598;
_Bool var_18 = (_Bool)0;
short var_19 = (short)12;
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
