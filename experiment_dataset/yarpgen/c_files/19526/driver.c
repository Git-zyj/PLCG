#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -7096806937274767407LL;
unsigned short var_1 = (unsigned short)27293;
unsigned short var_2 = (unsigned short)533;
long long int var_3 = -7784918708741689838LL;
_Bool var_4 = (_Bool)0;
_Bool var_5 = (_Bool)1;
unsigned short var_6 = (unsigned short)63994;
unsigned short var_7 = (unsigned short)59120;
signed char var_8 = (signed char)-100;
unsigned long long int var_9 = 11320819520607207317ULL;
_Bool var_10 = (_Bool)0;
unsigned char var_11 = (unsigned char)103;
unsigned long long int var_12 = 1903237782309860318ULL;
int zero = 0;
unsigned long long int var_13 = 16067520535160884606ULL;
unsigned long long int var_14 = 15950008941077680638ULL;
unsigned int var_15 = 3735163197U;
unsigned long long int var_16 = 7161924190025791844ULL;
unsigned char var_17 = (unsigned char)219;
int var_18 = -465261784;
long long int var_19 = 691504011752605195LL;
short var_20 = (short)14077;
unsigned short var_21 = (unsigned short)25271;
unsigned char var_22 = (unsigned char)26;
int var_23 = -1727238711;
unsigned short var_24 = (unsigned short)50400;
short var_25 = (short)32670;
unsigned char var_26 = (unsigned char)177;
long long int var_27 = 4941590099195175085LL;
long long int var_28 = -8236001313742302166LL;
signed char var_29 = (signed char)3;
long long int arr_6 [12] [12] ;
_Bool arr_8 [12] [12] [12] ;
unsigned short arr_21 [16] ;
long long int arr_7 [12] ;
_Bool arr_10 [12] [12] [12] ;
int arr_18 [12] ;
_Bool arr_19 [12] ;
unsigned char arr_24 [16] ;
unsigned char arr_27 [16] [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_6 [i_0] [i_1] = 8336564039947866484LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_21 [i_0] = (unsigned short)28254;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_7 [i_0] = -1056769232745017942LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_10 [i_0] [i_1] [i_2] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_18 [i_0] = (i_0 % 2 == 0) ? 1619712111 : 217449918;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_19 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_24 [i_0] = (unsigned char)99;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_27 [i_0] [i_1] = (unsigned char)37;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
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
    hash(&seed, var_28);
    hash(&seed, var_29);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_7 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                hash(&seed, arr_10 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_18 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_19 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_24 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            hash(&seed, arr_27 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
