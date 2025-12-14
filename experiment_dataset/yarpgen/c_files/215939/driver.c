#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)191;
long long int var_2 = -4174451361489530734LL;
unsigned long long int var_3 = 12426207982158794660ULL;
signed char var_4 = (signed char)31;
short var_5 = (short)30126;
unsigned long long int var_6 = 6281377897068554208ULL;
unsigned long long int var_7 = 10013085416352851894ULL;
unsigned int var_8 = 3726976654U;
short var_9 = (short)26190;
unsigned long long int var_10 = 11672578882043363887ULL;
int zero = 0;
long long int var_11 = 4125353767823328516LL;
_Bool var_12 = (_Bool)0;
unsigned char var_13 = (unsigned char)253;
unsigned long long int var_14 = 11641130322331574504ULL;
short var_15 = (short)-2541;
unsigned char var_16 = (unsigned char)142;
unsigned char var_17 = (unsigned char)214;
unsigned short var_18 = (unsigned short)57681;
unsigned short var_19 = (unsigned short)34368;
short var_20 = (short)22209;
short var_21 = (short)12119;
unsigned short var_22 = (unsigned short)29746;
unsigned char var_23 = (unsigned char)217;
unsigned short var_24 = (unsigned short)39379;
signed char var_25 = (signed char)-102;
short var_26 = (short)-4064;
unsigned char var_27 = (unsigned char)41;
short var_28 = (short)-25100;
unsigned int var_29 = 231907808U;
signed char var_30 = (signed char)-21;
short var_31 = (short)4351;
short var_32 = (short)-26411;
long long int arr_0 [17] ;
unsigned char arr_1 [17] ;
signed char arr_4 [17] ;
short arr_9 [17] [17] [17] [17] ;
unsigned long long int arr_11 [17] [17] [17] ;
_Bool arr_13 [19] ;
short arr_14 [19] ;
signed char arr_18 [19] [19] [19] ;
unsigned int arr_19 [19] [19] [19] ;
_Bool arr_21 [19] [19] [19] [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_0 [i_0] = -8100361441976747379LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_1 [i_0] = (unsigned char)16;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_4 [i_0] = (signed char)18;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    arr_9 [i_0] [i_1] [i_2] [i_3] = (short)-24756;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_11 [i_0] [i_1] [i_2] = 4256963555703426136ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_13 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_14 [i_0] = (short)32076;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_18 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (signed char)79 : (signed char)10;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_19 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? 609373959U : 763729688U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    arr_21 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)1;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
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
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    hash(&seed, arr_21 [i_0] [i_1] [i_2] [i_3] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
