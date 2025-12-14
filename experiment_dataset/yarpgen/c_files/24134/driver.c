#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)60;
unsigned char var_1 = (unsigned char)186;
unsigned int var_2 = 2655777792U;
unsigned int var_3 = 1788061359U;
signed char var_4 = (signed char)-64;
unsigned short var_5 = (unsigned short)3024;
unsigned int var_7 = 3600339149U;
short var_8 = (short)-31725;
_Bool var_9 = (_Bool)1;
signed char var_11 = (signed char)-39;
_Bool var_12 = (_Bool)1;
unsigned short var_13 = (unsigned short)44647;
int zero = 0;
long long int var_14 = -1830021792318535729LL;
_Bool var_15 = (_Bool)0;
unsigned long long int var_16 = 10563157034214169140ULL;
unsigned int var_17 = 3350659512U;
unsigned short var_18 = (unsigned short)26187;
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
