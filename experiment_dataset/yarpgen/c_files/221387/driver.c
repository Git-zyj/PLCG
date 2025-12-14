#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)58023;
unsigned int var_1 = 2276758271U;
unsigned short var_2 = (unsigned short)7318;
unsigned int var_4 = 2759245525U;
unsigned short var_5 = (unsigned short)34438;
signed char var_6 = (signed char)-82;
_Bool var_7 = (_Bool)1;
_Bool var_8 = (_Bool)0;
unsigned short var_9 = (unsigned short)5080;
int zero = 0;
unsigned long long int var_13 = 15169514034566380051ULL;
unsigned int var_14 = 3361044529U;
unsigned char var_15 = (unsigned char)39;
unsigned long long int var_16 = 12649683214308120816ULL;
int var_17 = 646075740;
unsigned short var_18 = (unsigned short)63566;
unsigned int var_19 = 3522203148U;
unsigned int var_20 = 1583730788U;
_Bool var_21 = (_Bool)0;
unsigned char var_22 = (unsigned char)35;
unsigned short var_23 = (unsigned short)25084;
unsigned long long int var_24 = 12473359304601305224ULL;
unsigned long long int var_25 = 229602198975336670ULL;
unsigned short arr_1 [10] ;
unsigned int arr_2 [10] ;
unsigned char arr_4 [10] [10] ;
short arr_7 [10] [10] [10] [10] ;
unsigned long long int arr_8 [10] [10] ;
signed char arr_9 [10] [10] [10] [10] ;
unsigned long long int arr_10 [10] [10] [10] [10] ;
unsigned int arr_11 [10] [10] [10] [10] [10] [10] ;
long long int arr_13 [18] ;
unsigned short arr_15 [18] ;
short arr_23 [18] [18] [18] [18] ;
signed char arr_24 [18] [18] ;
unsigned long long int arr_18 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_1 [i_0] = (unsigned short)48792;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_2 [i_0] = 2809121363U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_4 [i_0] [i_1] = (unsigned char)254;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    arr_7 [i_0] [i_1] [i_2] [i_3] = (short)-6306;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_8 [i_0] [i_1] = 18146592055133042507ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    arr_9 [i_0] [i_1] [i_2] [i_3] = (signed char)119;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    arr_10 [i_0] [i_1] [i_2] [i_3] = 10625689178302961673ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 10; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 10; ++i_5) 
                            arr_11 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = 665343519U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_13 [i_0] = 5446469404023058747LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_15 [i_0] = (unsigned short)35913;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    arr_23 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? (short)20036 : (short)9823;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_24 [i_0] [i_1] = (signed char)16;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_18 [i_0] = (i_0 % 2 == 0) ? 17333726154172278825ULL : 7092953021571917719ULL;
}

void checksum() {
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
    hash(&seed, var_25);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_18 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
