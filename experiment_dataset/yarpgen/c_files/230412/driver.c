#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)20619;
short var_2 = (short)13459;
unsigned int var_4 = 3959139833U;
unsigned long long int var_6 = 13105568863332539604ULL;
short var_7 = (short)-11873;
short var_12 = (short)30144;
unsigned long long int var_13 = 15013658951644356378ULL;
short var_15 = (short)21745;
unsigned char var_17 = (unsigned char)41;
int zero = 0;
int var_19 = 454330209;
unsigned long long int var_20 = 13637965021146798722ULL;
unsigned char var_21 = (unsigned char)210;
int var_22 = -1542487774;
short var_23 = (short)-27549;
short arr_0 [25] [25] ;
unsigned long long int arr_2 [25] [25] ;
int arr_3 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_0 [i_0] [i_1] = (i_1 % 2 == 0) ? (short)-25921 : (short)31974;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_2 [i_0] [i_1] = 16921596429212371059ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? 1031615984 : 866215392;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
