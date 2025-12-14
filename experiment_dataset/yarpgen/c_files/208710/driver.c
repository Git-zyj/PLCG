#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-14290;
_Bool var_1 = (_Bool)1;
signed char var_3 = (signed char)27;
long long int var_4 = 2983457659338040276LL;
short var_7 = (short)9789;
unsigned long long int var_10 = 2504100124495487803ULL;
int var_11 = -941138542;
_Bool var_12 = (_Bool)0;
unsigned char var_13 = (unsigned char)148;
short var_14 = (short)-24028;
signed char var_15 = (signed char)-88;
int var_17 = -874053133;
signed char var_18 = (signed char)-41;
unsigned short var_19 = (unsigned short)63974;
int zero = 0;
long long int var_20 = 6308112150661888074LL;
unsigned char var_21 = (unsigned char)186;
_Bool var_22 = (_Bool)0;
long long int var_23 = -1842939027138254789LL;
signed char var_24 = (signed char)-127;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
