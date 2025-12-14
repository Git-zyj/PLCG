#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 5256436837138954121LL;
short var_1 = (short)13715;
unsigned long long int var_2 = 12329479609315287933ULL;
int var_3 = -985480789;
long long int var_4 = 6629004497662038703LL;
unsigned long long int var_5 = 7829430615076500101ULL;
unsigned char var_7 = (unsigned char)3;
unsigned short var_10 = (unsigned short)28918;
int zero = 0;
int var_11 = -671751366;
long long int var_12 = 963355998735678143LL;
short var_13 = (short)-18103;
unsigned int var_14 = 2069201252U;
unsigned int var_15 = 3681420924U;
long long int var_16 = 5575158750365301482LL;
unsigned long long int var_17 = 14015891270229345528ULL;
signed char var_18 = (signed char)-101;
unsigned int var_19 = 2858879750U;
unsigned short arr_0 [17] [17] ;
long long int arr_1 [17] ;
int arr_2 [17] [17] ;
unsigned int arr_7 [17] [17] [17] ;
short arr_8 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned short)47244;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_1 [i_0] = 2990821952894967481LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_2 [i_0] [i_1] = 252336676;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = 3865632580U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_8 [i_0] = (short)20482;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                hash(&seed, arr_7 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_8 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
