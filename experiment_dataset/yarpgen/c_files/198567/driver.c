#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-86;
unsigned long long int var_1 = 7950813590437159098ULL;
unsigned char var_2 = (unsigned char)6;
unsigned char var_3 = (unsigned char)21;
signed char var_6 = (signed char)-12;
short var_7 = (short)3945;
short var_8 = (short)-17869;
int zero = 0;
unsigned char var_10 = (unsigned char)18;
unsigned long long int var_11 = 14598597214579678765ULL;
short var_12 = (short)17184;
int var_13 = 794594055;
unsigned char var_14 = (unsigned char)8;
unsigned short var_15 = (unsigned short)42058;
long long int var_16 = -247603813545039207LL;
unsigned char var_17 = (unsigned char)172;
int var_18 = 683383988;
_Bool var_19 = (_Bool)0;
unsigned short arr_0 [16] ;
unsigned short arr_1 [16] ;
unsigned int arr_3 [16] ;
int arr_4 [16] [16] ;
int arr_5 [16] ;
unsigned long long int arr_13 [16] [16] ;
unsigned long long int arr_6 [16] ;
unsigned short arr_7 [16] ;
long long int arr_14 [16] [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_0 [i_0] = (unsigned short)53143;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_1 [i_0] = (unsigned short)7174;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_3 [i_0] = 2548282793U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_4 [i_0] [i_1] = -1274495770;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_5 [i_0] = -849175395;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_13 [i_0] [i_1] = 4899593129476986576ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_6 [i_0] = 7801689071388939309ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_7 [i_0] = (unsigned short)26484;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_14 [i_0] [i_1] = (i_1 % 2 == 0) ? 7637564331084338113LL : 115388186517529793LL;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_7 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            hash(&seed, arr_14 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
