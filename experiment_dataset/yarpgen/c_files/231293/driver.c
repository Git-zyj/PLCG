#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 342621417U;
int var_2 = -1937586424;
_Bool var_4 = (_Bool)1;
int var_10 = 402794354;
_Bool var_12 = (_Bool)1;
int var_13 = -1668156879;
long long int var_14 = -4049455392493428228LL;
unsigned short var_15 = (unsigned short)20631;
signed char var_17 = (signed char)-28;
int zero = 0;
unsigned char var_18 = (unsigned char)55;
unsigned char var_19 = (unsigned char)191;
unsigned int var_20 = 3375690659U;
unsigned int arr_0 [14] ;
unsigned long long int arr_1 [14] ;
short arr_4 [14] [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_0 [i_0] = 1245734351U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_1 [i_0] = 8321778459723576510ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_4 [i_0] [i_1] = (short)18342;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
