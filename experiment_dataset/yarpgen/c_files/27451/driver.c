#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-98;
_Bool var_1 = (_Bool)1;
long long int var_2 = -6927245294821961685LL;
unsigned char var_3 = (unsigned char)187;
long long int var_4 = 2689158450928216828LL;
long long int var_5 = 2065210748829607983LL;
unsigned long long int var_7 = 16776915740528294855ULL;
int var_9 = -1883366467;
unsigned int var_10 = 2302896117U;
long long int var_11 = 1452187674911381643LL;
int var_12 = 693718107;
signed char var_13 = (signed char)8;
signed char var_14 = (signed char)98;
int zero = 0;
unsigned long long int var_15 = 4541556902000507317ULL;
unsigned long long int var_16 = 16010165583616768723ULL;
_Bool var_17 = (_Bool)1;
signed char var_18 = (signed char)-31;
signed char var_19 = (signed char)-104;
short var_20 = (short)-1319;
short var_21 = (short)16707;
long long int var_22 = -862622875724306855LL;
signed char var_23 = (signed char)-74;
unsigned short var_24 = (unsigned short)47030;
long long int var_25 = 3078125675236773496LL;
unsigned int var_26 = 4286223165U;
unsigned long long int var_27 = 1961644691744147191ULL;
signed char var_28 = (signed char)98;
unsigned int var_29 = 1431280928U;
signed char var_30 = (signed char)67;
long long int var_31 = 7763733623700239476LL;
int var_32 = 1098971555;
short var_33 = (short)31121;
unsigned long long int var_34 = 33772067017843969ULL;
short var_35 = (short)-27852;
unsigned char var_36 = (unsigned char)40;
long long int var_37 = 775962107274000340LL;
unsigned int arr_1 [18] [18] ;
_Bool arr_2 [18] ;
long long int arr_4 [24] ;
signed char arr_6 [24] ;
unsigned short arr_7 [24] ;
signed char arr_8 [24] ;
int arr_9 [24] ;
unsigned long long int arr_10 [24] [24] ;
short arr_11 [24] [24] [24] ;
int arr_15 [24] ;
signed char arr_17 [24] [24] [24] [24] ;
short arr_21 [24] [24] [24] ;
long long int arr_25 [24] [24] ;
unsigned char arr_26 [24] [24] [24] [24] [24] ;
long long int arr_32 [24] [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_1 [i_0] [i_1] = 3891570546U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_2 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_4 [i_0] = -6745976724474775265LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? (signed char)51 : (signed char)-72;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_7 [i_0] = (i_0 % 2 == 0) ? (unsigned short)48789 : (unsigned short)25006;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_8 [i_0] = (i_0 % 2 == 0) ? (signed char)-93 : (signed char)-9;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_9 [i_0] = -203190548;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_10 [i_0] [i_1] = 11723633782993416783ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_11 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (short)10197 : (short)3684;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_15 [i_0] = 1759709811;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    arr_17 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? (signed char)-85 : (signed char)-113;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_21 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (short)28346 : (short)-32561;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_25 [i_0] [i_1] = (i_0 % 2 == 0) ? 7870876906347235051LL : -6527025212415514046LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 24; ++i_4) 
                        arr_26 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_2 % 2 == 0) ? (unsigned char)81 : (unsigned char)4;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_32 [i_0] [i_1] = (i_0 % 2 == 0) ? -6095724464412228267LL : 8706387082091193034LL;
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
