#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-21208;
unsigned int var_9 = 4252855275U;
long long int var_12 = 5330705887072802708LL;
int zero = 0;
unsigned int var_20 = 3215737251U;
int var_21 = 1211155475;
long long int var_22 = 5251797248157615815LL;
unsigned int var_23 = 3613186741U;
long long int var_24 = -1387076968470167164LL;
long long int var_25 = -1054153358592932230LL;
short var_26 = (short)5879;
int var_27 = -1834863198;
short var_28 = (short)2857;
unsigned int arr_2 [14] ;
int arr_5 [14] [14] ;
long long int arr_10 [22] ;
int arr_22 [22] [22] [22] [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_2 [i_0] = 234560301U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_5 [i_0] [i_1] = 1503326348;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_10 [i_0] = -4297563216847826555LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    arr_22 [i_0] [i_1] [i_2] [i_3] = 279410326;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    hash(&seed, arr_22 [i_0] [i_1] [i_2] [i_3] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
