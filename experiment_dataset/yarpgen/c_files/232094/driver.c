#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -5547899277783454070LL;
int var_1 = 210382929;
unsigned int var_2 = 275580750U;
signed char var_3 = (signed char)-93;
unsigned int var_4 = 3203508962U;
unsigned int var_5 = 1455724314U;
int var_6 = -1228988947;
unsigned int var_7 = 1996785706U;
unsigned int var_8 = 292553205U;
unsigned int var_9 = 2099504931U;
int zero = 0;
unsigned int var_10 = 852593265U;
short var_11 = (short)-24933;
short var_12 = (short)6291;
long long int var_13 = 7176202679478694290LL;
unsigned int var_14 = 3505822144U;
unsigned int var_15 = 792085481U;
int var_16 = 1946788013;
int var_17 = 986123212;
unsigned long long int var_18 = 3294529645463276265ULL;
short var_19 = (short)-6984;
unsigned int var_20 = 513128047U;
unsigned int var_21 = 3092932217U;
_Bool var_22 = (_Bool)0;
short var_23 = (short)-28339;
long long int var_24 = 3301926221251003346LL;
unsigned int arr_0 [22] ;
short arr_1 [22] ;
long long int arr_2 [22] [22] ;
short arr_3 [22] ;
short arr_20 [18] [18] ;
unsigned int arr_4 [22] ;
unsigned long long int arr_10 [17] [17] ;
int arr_15 [17] [17] [17] ;
signed char arr_21 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? 2655734734U : 2218236393U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_1 [i_0] = (short)-11565;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_2 [i_0] [i_1] = 8781773602725199013LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? (short)-25014 : (short)-8250;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_20 [i_0] [i_1] = (short)-28679;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? 2514926372U : 691519223U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_10 [i_0] [i_1] = 17501356645640587280ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_15 [i_0] [i_1] [i_2] = 1303173522;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_21 [i_0] = (signed char)95;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            hash(&seed, arr_10 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                hash(&seed, arr_15 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_21 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
