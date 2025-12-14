#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -2229360775590227513LL;
short var_1 = (short)12856;
unsigned char var_2 = (unsigned char)215;
short var_3 = (short)-11102;
unsigned short var_4 = (unsigned short)20403;
signed char var_5 = (signed char)95;
unsigned long long int var_6 = 1344844862151468336ULL;
int var_8 = -1334467708;
signed char var_9 = (signed char)97;
unsigned int var_10 = 46651490U;
unsigned short var_11 = (unsigned short)17952;
unsigned short var_12 = (unsigned short)46467;
int zero = 0;
_Bool var_13 = (_Bool)1;
long long int var_14 = 3137168206246567217LL;
unsigned long long int var_15 = 6038922668022359795ULL;
short var_16 = (short)-12036;
long long int var_17 = -1044506040137849056LL;
unsigned long long int var_18 = 17905562447871453480ULL;
unsigned short arr_0 [20] ;
unsigned long long int arr_1 [20] ;
short arr_2 [20] [20] ;
unsigned short arr_3 [20] [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? (unsigned short)60988 : (unsigned short)34774;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? 10155536942279279197ULL : 161992641346534386ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_2 [i_0] [i_1] = (short)-21682;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_3 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned short)30302 : (unsigned short)23192;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
