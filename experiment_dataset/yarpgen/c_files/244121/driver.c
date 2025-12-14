#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 8303283157605357839LL;
unsigned long long int var_1 = 602158318005163446ULL;
unsigned int var_7 = 1578576404U;
unsigned long long int var_11 = 17259474038889048687ULL;
unsigned short var_13 = (unsigned short)18102;
unsigned long long int var_14 = 12621327682134014013ULL;
int var_15 = -1418374380;
int zero = 0;
unsigned char var_16 = (unsigned char)149;
unsigned long long int var_17 = 13986886976717248467ULL;
unsigned short var_18 = (unsigned short)27394;
unsigned long long int var_19 = 1703240066640498395ULL;
short var_20 = (short)17896;
short arr_0 [21] ;
unsigned long long int arr_1 [21] [21] ;
unsigned long long int arr_2 [21] ;
unsigned short arr_6 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_0 [i_0] = (short)28858;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_1 [i_0] [i_1] = 5043170814739135055ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_2 [i_0] = 13333347325419080615ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_6 [i_0] = (unsigned short)1578;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
