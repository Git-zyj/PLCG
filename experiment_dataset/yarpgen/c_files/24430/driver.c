#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)42;
long long int var_1 = 7337449472445311037LL;
signed char var_2 = (signed char)5;
unsigned char var_3 = (unsigned char)44;
unsigned short var_4 = (unsigned short)30688;
int var_6 = -714244972;
long long int var_8 = 1447167210456342077LL;
_Bool var_10 = (_Bool)1;
long long int var_11 = 4074524427730248355LL;
unsigned short var_12 = (unsigned short)10486;
unsigned char var_13 = (unsigned char)59;
_Bool var_15 = (_Bool)0;
_Bool var_17 = (_Bool)1;
int zero = 0;
unsigned long long int var_18 = 8606722974683290354ULL;
unsigned long long int var_19 = 14486084356128140171ULL;
long long int var_20 = 693087732800441137LL;
int var_21 = -902439389;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
