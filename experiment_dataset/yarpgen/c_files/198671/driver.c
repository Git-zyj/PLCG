#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1547410408;
signed char var_1 = (signed char)63;
unsigned int var_3 = 914240496U;
int var_5 = -1109840970;
unsigned int var_6 = 1205689848U;
int var_7 = 1979005243;
long long int var_9 = -435741011011674985LL;
unsigned int var_11 = 393853769U;
long long int var_13 = -2956667002436207373LL;
int var_15 = -1050255738;
int zero = 0;
unsigned char var_17 = (unsigned char)176;
unsigned int var_18 = 4048241574U;
unsigned short var_19 = (unsigned short)22277;
_Bool var_20 = (_Bool)0;
unsigned int var_21 = 1331330941U;
int var_22 = -987334143;
unsigned char var_23 = (unsigned char)222;
int var_24 = -137540432;
unsigned char var_25 = (unsigned char)147;
long long int var_26 = -4057717423022424009LL;
unsigned int var_27 = 276144397U;
unsigned short arr_2 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_2 [i_0] = (unsigned short)61328;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
