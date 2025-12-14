#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -7054422024554859090LL;
long long int var_2 = -8043132399877147069LL;
unsigned int var_4 = 3901140571U;
signed char var_5 = (signed char)15;
short var_6 = (short)-26240;
short var_8 = (short)-22010;
signed char var_9 = (signed char)-103;
unsigned char var_10 = (unsigned char)190;
unsigned int var_13 = 2336325964U;
unsigned int var_14 = 3681549521U;
_Bool var_15 = (_Bool)0;
int var_16 = 293280734;
int zero = 0;
unsigned char var_17 = (unsigned char)64;
signed char var_18 = (signed char)19;
unsigned short var_19 = (unsigned short)37949;
int var_20 = -1656226721;
long long int arr_1 [15] ;
int arr_2 [15] [15] ;
unsigned char arr_5 [15] ;
signed char arr_6 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_1 [i_0] = -7384457157560368582LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_2 [i_0] [i_1] = 26595435;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_5 [i_0] = (unsigned char)145;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_6 [i_0] = (signed char)60;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
