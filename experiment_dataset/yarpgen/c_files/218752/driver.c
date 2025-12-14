#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 2189247767778351347LL;
short var_1 = (short)28646;
short var_2 = (short)-11717;
short var_3 = (short)28080;
unsigned char var_4 = (unsigned char)81;
unsigned int var_5 = 1966927600U;
short var_6 = (short)-21498;
unsigned short var_7 = (unsigned short)61336;
unsigned char var_8 = (unsigned char)53;
short var_9 = (short)32313;
unsigned short var_10 = (unsigned short)16049;
signed char var_11 = (signed char)-81;
unsigned int var_12 = 636815617U;
unsigned char var_13 = (unsigned char)191;
unsigned char var_14 = (unsigned char)82;
short var_15 = (short)-13044;
int zero = 0;
unsigned short var_16 = (unsigned short)1434;
int var_17 = -190038151;
unsigned int var_18 = 464060057U;
unsigned int var_19 = 3888650857U;
unsigned int var_20 = 2690130665U;
long long int var_21 = 8942325194562763441LL;
unsigned short var_22 = (unsigned short)56961;
long long int var_23 = -275310369713155701LL;
short var_24 = (short)15898;
int var_25 = 1833203698;
unsigned short var_26 = (unsigned short)26930;
long long int var_27 = 2449296504416386557LL;
unsigned long long int var_28 = 11909840418632133193ULL;
unsigned long long int var_29 = 9963279903663847242ULL;
unsigned short var_30 = (unsigned short)53203;
unsigned long long int var_31 = 16948499420999138428ULL;
long long int var_32 = -3225375844537160529LL;
unsigned char var_33 = (unsigned char)81;
unsigned char var_34 = (unsigned char)209;
unsigned char var_35 = (unsigned char)182;
unsigned short arr_0 [21] ;
unsigned long long int arr_1 [21] [21] ;
long long int arr_3 [21] ;
_Bool arr_4 [21] ;
unsigned long long int arr_5 [21] [21] [21] [21] ;
unsigned long long int arr_6 [21] [21] [21] [21] ;
unsigned long long int arr_8 [21] [21] [21] [21] [21] [21] ;
unsigned int arr_9 [21] ;
long long int arr_10 [21] ;
unsigned short arr_11 [21] [21] [21] ;
short arr_12 [21] ;
unsigned char arr_13 [21] [21] ;
unsigned int arr_14 [21] [21] ;
short arr_20 [17] [17] ;
int arr_23 [17] ;
long long int arr_26 [17] [17] [17] [17] [17] [17] ;
int arr_37 [17] [17] ;
unsigned short arr_2 [21] ;
long long int arr_17 [17] [17] ;
short arr_18 [17] ;
int arr_22 [17] [17] [17] ;
unsigned char arr_25 [17] [17] [17] ;
int arr_31 [17] ;
unsigned short arr_35 [17] [17] [17] [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_0 [i_0] = (unsigned short)1746;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_1 [i_0] [i_1] = 14728067976404093921ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_3 [i_0] = -162012282863069524LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_4 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    arr_5 [i_0] [i_1] [i_2] [i_3] = 2451823612122602569ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    arr_6 [i_0] [i_1] [i_2] [i_3] = 1911885856506302796ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 21; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 21; ++i_5) 
                            arr_8 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = 10550825784598733318ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_9 [i_0] = 2361763873U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_10 [i_0] = 2910221903572952254LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_11 [i_0] [i_1] [i_2] = (unsigned short)57566;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_12 [i_0] = (short)-22737;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_13 [i_0] [i_1] = (unsigned char)180;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_14 [i_0] [i_1] = 1308270244U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_20 [i_0] [i_1] = (short)-4269;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_23 [i_0] = -1828373422;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 17; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 17; ++i_5) 
                            arr_26 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_1 % 2 == 0) ? -3256880866544179157LL : -5253926728481226333LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_37 [i_0] [i_1] = (i_0 % 2 == 0) ? 2136528137 : 1392635945;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_2 [i_0] = (unsigned short)41473;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_17 [i_0] [i_1] = (i_0 % 2 == 0) ? 8417087631028328060LL : 3070424461487030339LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_18 [i_0] = (i_0 % 2 == 0) ? (short)32197 : (short)28936;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_22 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? -641697786 : -1299040654;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_25 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (unsigned char)77 : (unsigned char)204;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_31 [i_0] = (i_0 % 2 == 0) ? 1671805978 : 1276146519;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    arr_35 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? (unsigned short)36790 : (unsigned short)23282;
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
    hash(&seed, var_32);
    hash(&seed, var_33);
    hash(&seed, var_34);
    hash(&seed, var_35);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            hash(&seed, arr_17 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_18 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                hash(&seed, arr_22 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                hash(&seed, arr_25 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_31 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    hash(&seed, arr_35 [i_0] [i_1] [i_2] [i_3] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
