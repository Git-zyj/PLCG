#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)35;
signed char var_5 = (signed char)-34;
unsigned long long int var_6 = 9271453441078265623ULL;
signed char var_10 = (signed char)122;
signed char var_12 = (signed char)103;
unsigned short var_13 = (unsigned short)40308;
unsigned short var_15 = (unsigned short)9280;
long long int var_16 = 1371992596843117038LL;
signed char var_17 = (signed char)-3;
int zero = 0;
short var_19 = (short)-24842;
unsigned long long int var_20 = 14597664743014522958ULL;
signed char var_21 = (signed char)-90;
unsigned short var_22 = (unsigned short)13325;
short var_23 = (short)13564;
long long int arr_5 [11] [11] [11] [11] ;
signed char arr_6 [11] ;
short arr_10 [11] ;
unsigned long long int arr_11 [11] ;
unsigned short arr_12 [11] [11] [11] [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    arr_5 [i_0] [i_1] [i_2] [i_3] = 6142491611072950764LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_6 [i_0] = (signed char)-10;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_10 [i_0] = (short)-4636;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_11 [i_0] = 16390403060035172775ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    arr_12 [i_0] [i_1] [i_2] [i_3] = (unsigned short)41161;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_10 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_11 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    hash(&seed, arr_12 [i_0] [i_1] [i_2] [i_3] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
