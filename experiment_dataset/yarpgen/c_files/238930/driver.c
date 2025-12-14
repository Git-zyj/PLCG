#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 15411139544515708579ULL;
unsigned char var_2 = (unsigned char)55;
unsigned long long int var_3 = 13802712381370102936ULL;
unsigned long long int var_4 = 11465147261123317463ULL;
int var_5 = 1649292726;
unsigned char var_6 = (unsigned char)120;
int var_8 = 1916267725;
unsigned long long int var_11 = 9187314580835892671ULL;
int var_13 = -445201654;
unsigned long long int var_14 = 953284388350723646ULL;
unsigned long long int var_15 = 5278551441534149118ULL;
unsigned char var_16 = (unsigned char)136;
int var_17 = 1383116741;
unsigned char var_18 = (unsigned char)181;
int zero = 0;
unsigned long long int var_19 = 1051360223201693757ULL;
unsigned char var_20 = (unsigned char)223;
int var_21 = 1397421230;
int var_22 = 1380304075;
unsigned char var_23 = (unsigned char)184;
unsigned char var_24 = (unsigned char)11;
unsigned long long int var_25 = 15610413137389831948ULL;
unsigned char var_26 = (unsigned char)17;
unsigned long long int var_27 = 759791774534316699ULL;
unsigned long long int arr_0 [11] ;
int arr_4 [15] ;
unsigned char arr_5 [15] ;
int arr_8 [15] [15] [15] ;
unsigned long long int arr_14 [15] [15] [15] [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_0 [i_0] = 657902588320163186ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_4 [i_0] = 1215517662;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_5 [i_0] = (unsigned char)0;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = -1500661584;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    arr_14 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? 11746674148520042388ULL : 2008392378465025133ULL;
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
    hash(&seed, var_27);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
