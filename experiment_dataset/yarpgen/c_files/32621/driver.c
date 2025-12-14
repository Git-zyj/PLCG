#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)3;
long long int var_1 = 1873013563694043206LL;
signed char var_2 = (signed char)46;
unsigned char var_3 = (unsigned char)119;
unsigned int var_4 = 1943484574U;
int var_5 = 1404253682;
unsigned int var_6 = 1796664098U;
short var_7 = (short)5175;
signed char var_8 = (signed char)68;
unsigned int var_9 = 2255937298U;
int var_10 = 1431873272;
signed char var_11 = (signed char)10;
_Bool var_12 = (_Bool)0;
long long int var_13 = 2258573038480068350LL;
int zero = 0;
signed char var_14 = (signed char)124;
signed char var_15 = (signed char)-66;
int var_16 = -1629309789;
unsigned int var_17 = 2387453834U;
unsigned char var_18 = (unsigned char)129;
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
