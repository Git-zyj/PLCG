#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
short var_2 = (short)-4471;
short var_3 = (short)-23108;
short var_5 = (short)-24943;
unsigned char var_6 = (unsigned char)61;
unsigned int var_7 = 2817941152U;
long long int var_8 = 7991359507942716382LL;
int var_9 = 1131279463;
unsigned char var_11 = (unsigned char)182;
_Bool var_12 = (_Bool)1;
unsigned short var_14 = (unsigned short)53883;
unsigned short var_16 = (unsigned short)12447;
unsigned char var_17 = (unsigned char)180;
int zero = 0;
unsigned short var_18 = (unsigned short)8387;
unsigned int var_19 = 1274777843U;
unsigned long long int var_20 = 889921371871290537ULL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
