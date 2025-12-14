#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
int var_1 = 1719463385;
int var_3 = 60606288;
unsigned int var_4 = 876302407U;
unsigned int var_5 = 3118259824U;
int var_7 = -1448945413;
long long int var_8 = -8668037098299167587LL;
short var_9 = (short)-6943;
short var_11 = (short)32467;
_Bool var_13 = (_Bool)0;
signed char var_14 = (signed char)-26;
unsigned long long int var_16 = 169945479035879099ULL;
signed char var_17 = (signed char)-76;
short var_18 = (short)26162;
int zero = 0;
unsigned long long int var_20 = 17192937383827349764ULL;
short var_21 = (short)28095;
unsigned long long int var_22 = 18445431637422742042ULL;
unsigned short var_23 = (unsigned short)30026;
_Bool var_24 = (_Bool)1;
unsigned long long int var_25 = 542389617677271072ULL;
unsigned short var_26 = (unsigned short)27923;
unsigned char var_27 = (unsigned char)253;
int var_28 = -1649648565;
int var_29 = 45596044;
_Bool var_30 = (_Bool)0;
unsigned short var_31 = (unsigned short)25776;
_Bool var_32 = (_Bool)1;
long long int var_33 = -7426622758872854370LL;
unsigned short arr_7 [13] [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_7 [i_0] [i_1] = (unsigned short)55513;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
    hash(&seed, var_29);
    hash(&seed, var_30);
    hash(&seed, var_31);
    hash(&seed, var_32);
    hash(&seed, var_33);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            hash(&seed, arr_7 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
