#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)81;
unsigned char var_1 = (unsigned char)161;
short var_2 = (short)-25065;
unsigned int var_3 = 1868394161U;
unsigned char var_4 = (unsigned char)75;
signed char var_5 = (signed char)80;
long long int var_6 = 3593282437430125177LL;
long long int var_7 = -452075300111270795LL;
short var_8 = (short)-15658;
long long int var_9 = 7794572111295595978LL;
signed char var_10 = (signed char)-15;
signed char var_11 = (signed char)-2;
unsigned char var_12 = (unsigned char)129;
short var_13 = (short)-22265;
short var_14 = (short)23150;
_Bool var_15 = (_Bool)0;
unsigned short var_17 = (unsigned short)36103;
signed char var_18 = (signed char)108;
unsigned short var_19 = (unsigned short)48443;
int zero = 0;
unsigned char var_20 = (unsigned char)152;
unsigned char var_21 = (unsigned char)60;
unsigned short var_22 = (unsigned short)44889;
unsigned char var_23 = (unsigned char)189;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
