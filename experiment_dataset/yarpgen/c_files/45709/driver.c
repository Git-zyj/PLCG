#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)1;
unsigned int var_4 = 156212087U;
unsigned char var_5 = (unsigned char)155;
unsigned short var_6 = (unsigned short)43145;
unsigned short var_7 = (unsigned short)29286;
short var_9 = (short)-26646;
_Bool var_11 = (_Bool)0;
unsigned long long int var_12 = 18376348824887712531ULL;
signed char var_14 = (signed char)-44;
unsigned long long int var_15 = 4760673745142842041ULL;
unsigned short var_16 = (unsigned short)63829;
short var_17 = (short)27336;
int zero = 0;
int var_18 = -1474889868;
unsigned int var_19 = 3570707549U;
unsigned char var_20 = (unsigned char)161;
signed char var_21 = (signed char)9;
unsigned char var_22 = (unsigned char)223;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
