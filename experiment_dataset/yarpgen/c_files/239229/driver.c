#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1131065218;
unsigned long long int var_3 = 175103287764743227ULL;
int var_4 = 328470176;
short var_9 = (short)-27769;
unsigned short var_10 = (unsigned short)44473;
unsigned long long int var_12 = 8314417976352995656ULL;
signed char var_15 = (signed char)55;
int zero = 0;
int var_18 = 742532892;
long long int var_19 = -390145052550566408LL;
long long int var_20 = -1652522217228234646LL;
signed char var_21 = (signed char)-105;
unsigned char var_22 = (unsigned char)247;
short arr_0 [13] ;
int arr_1 [13] ;
unsigned char arr_2 [13] ;
short arr_3 [13] [13] [13] ;
unsigned short arr_7 [10] ;
long long int arr_8 [10] ;
unsigned long long int arr_4 [13] ;
int arr_5 [13] ;
unsigned char arr_9 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_0 [i_0] = (short)7001;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_1 [i_0] = -868742180;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_2 [i_0] = (unsigned char)196;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (short)22835;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_7 [i_0] = (unsigned short)16895;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_8 [i_0] = 7710899838707865411LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_4 [i_0] = 14082819416792621578ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_5 [i_0] = 430922359;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_9 [i_0] = (unsigned char)22;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_9 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
