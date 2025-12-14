#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 1339411037;
unsigned char var_4 = (unsigned char)144;
unsigned int var_6 = 1972206571U;
unsigned long long int var_7 = 2117090895150728811ULL;
_Bool var_10 = (_Bool)1;
unsigned long long int var_11 = 11750987114457442157ULL;
long long int var_12 = -1530823978297642285LL;
unsigned long long int var_13 = 14772017272333344889ULL;
_Bool var_15 = (_Bool)1;
int zero = 0;
short var_16 = (short)21274;
signed char var_17 = (signed char)70;
unsigned short var_18 = (unsigned short)56408;
signed char var_19 = (signed char)62;
int var_20 = 1356553710;
unsigned char var_21 = (unsigned char)243;
unsigned char var_22 = (unsigned char)94;
unsigned long long int var_23 = 4457452594123784583ULL;
int var_24 = 1305211309;
unsigned char var_25 = (unsigned char)13;
long long int var_26 = 8566770553684771988LL;
short var_27 = (short)-11464;
long long int var_28 = 8418770986506320609LL;
unsigned char var_29 = (unsigned char)154;
unsigned int var_30 = 649416056U;
long long int var_31 = -6878584615784516437LL;
unsigned char arr_0 [13] [13] ;
int arr_1 [13] [13] ;
unsigned char arr_3 [13] ;
long long int arr_6 [17] ;
int arr_9 [17] [17] ;
int arr_12 [17] ;
signed char arr_17 [17] [17] [17] [17] ;
signed char arr_8 [17] [17] ;
unsigned long long int arr_18 [17] [17] [17] [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned char)127;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_1 [i_0] [i_1] = 1902449290;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_3 [i_0] = (unsigned char)136;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_6 [i_0] = -4731075670574612274LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_9 [i_0] [i_1] = 488291104;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_12 [i_0] = 1565667813;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    arr_17 [i_0] [i_1] [i_2] [i_3] = (signed char)-67;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_8 [i_0] [i_1] = (signed char)-112;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    arr_18 [i_0] [i_1] [i_2] [i_3] = 13457942361100519534ULL;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            hash(&seed, arr_8 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    hash(&seed, arr_18 [i_0] [i_1] [i_2] [i_3] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
