#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 4668894609342140533LL;
int var_1 = 954567444;
unsigned long long int var_2 = 1038755809090367420ULL;
unsigned short var_3 = (unsigned short)53539;
unsigned short var_4 = (unsigned short)32076;
short var_6 = (short)28036;
unsigned int var_7 = 2059225039U;
unsigned short var_9 = (unsigned short)60345;
_Bool var_10 = (_Bool)0;
unsigned int var_11 = 2528846052U;
int zero = 0;
long long int var_12 = -5734147250864005853LL;
unsigned short var_13 = (unsigned short)13724;
unsigned long long int var_14 = 11097552196579266917ULL;
unsigned long long int var_15 = 1091707945455270016ULL;
unsigned int var_16 = 2315824732U;
short var_17 = (short)-29934;
unsigned long long int var_18 = 8657995504985339723ULL;
long long int var_19 = -1112106837496988949LL;
_Bool var_20 = (_Bool)0;
long long int arr_0 [25] [25] ;
signed char arr_1 [25] ;
unsigned long long int arr_6 [12] [12] ;
unsigned int arr_7 [13] ;
long long int arr_9 [13] ;
_Bool arr_2 [25] ;
unsigned int arr_3 [25] [25] ;
_Bool arr_4 [25] [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_0 [i_0] [i_1] = (i_0 % 2 == 0) ? 3559778274750463551LL : -6694601489764337937LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? (signed char)-45 : (signed char)-96;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_6 [i_0] [i_1] = 2143884428659105475ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_7 [i_0] = 4204689313U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_9 [i_0] = -7730148617170031466LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_3 [i_0] [i_1] = (i_0 % 2 == 0) ? 3843601250U : 2287124572U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_4 [i_0] [i_1] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)0;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
