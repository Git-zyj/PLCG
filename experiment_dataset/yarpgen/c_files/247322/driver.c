#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-10256;
long long int var_2 = 4695967809243105925LL;
unsigned short var_3 = (unsigned short)61515;
long long int var_5 = 8535510121151793427LL;
short var_6 = (short)-10138;
signed char var_8 = (signed char)-6;
unsigned short var_9 = (unsigned short)4919;
unsigned int var_10 = 1488567441U;
short var_12 = (short)5787;
unsigned int var_15 = 550911811U;
short var_16 = (short)7689;
long long int var_19 = 8458181083915890064LL;
int zero = 0;
unsigned short var_20 = (unsigned short)32653;
unsigned char var_21 = (unsigned char)226;
unsigned int var_22 = 1789956286U;
short var_23 = (short)-18969;
long long int arr_0 [17] [17] ;
long long int arr_2 [17] [17] ;
unsigned int arr_3 [17] [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_0 [i_0] [i_1] = 4458213279892454618LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_2 [i_0] [i_1] = (i_1 % 2 == 0) ? 5574307406017092661LL : 2740782686242192146LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_3 [i_0] [i_1] = (i_1 % 2 == 0) ? 764117918U : 3747414484U;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
