#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int zero = 0;
long long int var_13 = -6730511800310702149LL;
_Bool var_14 = (_Bool)1;
short var_15 = (short)-29351;
int var_16 = 1086310477;
unsigned short var_17 = (unsigned short)43967;
unsigned int var_18 = 649561269U;
unsigned long long int var_19 = 3089520318814397729ULL;
unsigned long long int var_20 = 3335020730190734859ULL;
_Bool var_21 = (_Bool)1;
long long int var_22 = 9026775737639496116LL;
_Bool var_23 = (_Bool)0;
unsigned long long int var_24 = 6111246604090688845ULL;
signed char var_25 = (signed char)31;
unsigned long long int var_26 = 4296562459987009497ULL;
_Bool var_27 = (_Bool)1;
unsigned int var_28 = 3764337061U;
signed char var_29 = (signed char)21;
unsigned char var_30 = (unsigned char)73;
signed char var_31 = (signed char)37;
unsigned long long int var_32 = 9662534970249680443ULL;
short var_33 = (short)18866;
short var_34 = (short)19358;
unsigned long long int var_35 = 17439108949261313072ULL;
short var_36 = (short)-29935;
signed char var_37 = (signed char)34;
short var_38 = (short)-22089;
unsigned short var_39 = (unsigned short)11485;
unsigned int var_40 = 2235617027U;
short var_41 = (short)12360;
unsigned short var_42 = (unsigned short)65418;
short var_43 = (short)27574;
signed char var_44 = (signed char)-45;
signed char arr_26 [15] [15] [15] ;
unsigned short arr_85 [12] [12] [12] [12] [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_26 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (signed char)-10 : (signed char)112;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 12; ++i_4) 
                        arr_85 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_2 % 2 == 0) ? (unsigned short)24430 : (unsigned short)14927;
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
    hash(&seed, var_30);
    hash(&seed, var_31);
    hash(&seed, var_32);
    hash(&seed, var_33);
    hash(&seed, var_34);
    hash(&seed, var_35);
    hash(&seed, var_36);
    hash(&seed, var_37);
    hash(&seed, var_38);
    hash(&seed, var_39);
    hash(&seed, var_40);
    hash(&seed, var_41);
    hash(&seed, var_42);
    hash(&seed, var_43);
    hash(&seed, var_44);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                hash(&seed, arr_26 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 12; ++i_4) 
                        hash(&seed, arr_85 [i_0] [i_1] [i_2] [i_3] [i_4] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
