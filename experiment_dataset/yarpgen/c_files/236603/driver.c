#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = 1799117517;
long long int var_4 = -6258492737092120394LL;
unsigned short var_5 = (unsigned short)27684;
_Bool var_6 = (_Bool)0;
long long int var_9 = -8219618477547080807LL;
unsigned int var_10 = 3905713558U;
unsigned char var_11 = (unsigned char)155;
unsigned long long int var_12 = 16586664939191559153ULL;
int zero = 0;
unsigned long long int var_18 = 14242527274136270557ULL;
unsigned long long int var_19 = 8693681257103164666ULL;
unsigned long long int var_20 = 2104536593379782622ULL;
unsigned long long int var_21 = 14990571813588897186ULL;
short var_22 = (short)25794;
unsigned short var_23 = (unsigned short)36842;
unsigned short arr_0 [11] ;
unsigned char arr_1 [11] ;
unsigned int arr_2 [11] ;
unsigned int arr_5 [11] [11] [11] ;
unsigned char arr_6 [11] ;
unsigned short arr_7 [11] [11] ;
int arr_8 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? (unsigned short)5331 : (unsigned short)65418;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_1 [i_0] = (unsigned char)149;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_2 [i_0] = 2984282080U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = 1488147890U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? (unsigned char)153 : (unsigned char)82;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_7 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned short)1294 : (unsigned short)20917;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_8 [i_0] = (i_0 % 2 == 0) ? 1550423280 : 1038209645;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_8 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
