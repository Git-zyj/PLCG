#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 8951879810900506301LL;
unsigned char var_1 = (unsigned char)208;
signed char var_2 = (signed char)-89;
long long int var_4 = -4072183940467289303LL;
signed char var_7 = (signed char)-71;
long long int var_8 = -2369171590356543338LL;
long long int var_9 = 6390969473348993195LL;
unsigned long long int var_10 = 14270597794882833451ULL;
unsigned long long int var_13 = 6268701166627253932ULL;
unsigned char var_14 = (unsigned char)28;
long long int var_15 = -3856157188812720080LL;
signed char var_16 = (signed char)-57;
int zero = 0;
signed char var_19 = (signed char)-109;
_Bool var_20 = (_Bool)1;
short var_21 = (short)-12345;
signed char var_22 = (signed char)38;
unsigned char var_23 = (unsigned char)25;
unsigned char var_24 = (unsigned char)50;
unsigned short var_25 = (unsigned short)53148;
long long int var_26 = -1205634260742866300LL;
signed char arr_0 [25] [25] ;
signed char arr_1 [25] [25] ;
_Bool arr_5 [25] [25] ;
unsigned char arr_9 [25] [25] [25] ;
long long int arr_2 [25] ;
unsigned short arr_3 [25] [25] ;
signed char arr_6 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_0 [i_0] [i_1] = (signed char)111;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_1 [i_0] [i_1] = (signed char)-61;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_5 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = (unsigned char)18;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? 3017902634967919189LL : 4958069685189929924LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_3 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned short)27039 : (unsigned short)35797;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_6 [i_0] = (signed char)-48;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
