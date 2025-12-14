#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1255385942;
int var_1 = -1267509133;
long long int var_2 = -677926791462544771LL;
signed char var_3 = (signed char)26;
signed char var_4 = (signed char)-6;
short var_6 = (short)-12595;
long long int var_9 = -1514110484590012445LL;
unsigned long long int var_10 = 3685422215120977758ULL;
long long int var_11 = 360790181161334366LL;
unsigned long long int var_12 = 8821755142802285461ULL;
short var_14 = (short)30892;
int zero = 0;
signed char var_15 = (signed char)101;
long long int var_16 = 8422084526993885987LL;
int var_17 = -316758047;
unsigned short var_18 = (unsigned short)52680;
short var_19 = (short)-847;
short var_20 = (short)4277;
unsigned char var_21 = (unsigned char)171;
short var_22 = (short)16952;
short var_23 = (short)18784;
short arr_6 [17] [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_6 [i_0] [i_1] = (short)17757;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
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
