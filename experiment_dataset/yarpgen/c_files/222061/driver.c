#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)122;
short var_2 = (short)-595;
unsigned short var_3 = (unsigned short)40947;
unsigned int var_5 = 2867625711U;
unsigned long long int var_6 = 7977371545948582175ULL;
unsigned int var_7 = 4236051313U;
unsigned char var_8 = (unsigned char)124;
signed char var_9 = (signed char)-25;
unsigned char var_10 = (unsigned char)69;
unsigned char var_11 = (unsigned char)239;
unsigned char var_12 = (unsigned char)66;
short var_13 = (short)-6376;
unsigned char var_14 = (unsigned char)170;
unsigned long long int var_15 = 697596352103836341ULL;
int zero = 0;
int var_16 = -207961370;
unsigned long long int var_17 = 9889366942040808183ULL;
int var_18 = 332433175;
signed char var_19 = (signed char)39;
unsigned char var_20 = (unsigned char)206;
unsigned char var_21 = (unsigned char)0;
int var_22 = 1101741970;
short var_23 = (short)5147;
unsigned char var_24 = (unsigned char)61;
unsigned char var_25 = (unsigned char)158;
short var_26 = (short)19363;
_Bool var_27 = (_Bool)0;
unsigned long long int var_28 = 2968008174021060803ULL;
unsigned long long int var_29 = 18146007504740049624ULL;
unsigned char var_30 = (unsigned char)220;
unsigned long long int var_31 = 8688982846357224479ULL;
int arr_1 [20] ;
unsigned long long int arr_2 [20] ;
unsigned char arr_4 [20] ;
long long int arr_5 [20] [20] [20] ;
unsigned short arr_6 [20] ;
unsigned short arr_7 [20] ;
signed char arr_9 [20] [20] ;
_Bool arr_11 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? -766467186 : -287672872;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_2 [i_0] = 17262212804018618881ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_4 [i_0] = (unsigned char)56;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = 4059672410764160975LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? (unsigned short)41077 : (unsigned short)50044;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_7 [i_0] = (unsigned short)46250;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_9 [i_0] [i_1] = (signed char)71;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_11 [i_0] = (_Bool)1;
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
