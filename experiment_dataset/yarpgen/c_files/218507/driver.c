#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_4 = 679466484;
long long int var_5 = 8719724072460836456LL;
unsigned int var_9 = 932768083U;
short var_11 = (short)-14310;
unsigned int var_12 = 663335867U;
signed char var_13 = (signed char)80;
short var_14 = (short)20440;
int var_15 = 1142243588;
_Bool var_16 = (_Bool)0;
int zero = 0;
unsigned long long int var_18 = 4797942885272413111ULL;
short var_19 = (short)-11195;
_Bool var_20 = (_Bool)0;
long long int var_21 = -585408851140760587LL;
unsigned int var_22 = 3864214428U;
long long int var_23 = -1442819856635941338LL;
int arr_2 [22] [22] ;
unsigned long long int arr_3 [22] [22] ;
unsigned short arr_4 [22] [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_2 [i_0] [i_1] = -565442134;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_3 [i_0] [i_1] = 13385331157471914492ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_4 [i_0] [i_1] = (unsigned short)29076;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
