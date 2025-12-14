#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-13820;
long long int var_2 = 7433087065763869869LL;
unsigned long long int var_3 = 9633085260734305454ULL;
short var_4 = (short)12197;
signed char var_5 = (signed char)84;
unsigned long long int var_7 = 5964126945955727904ULL;
short var_8 = (short)-10703;
unsigned long long int var_9 = 11113906805678886079ULL;
unsigned long long int var_10 = 14056080243370099266ULL;
unsigned short var_11 = (unsigned short)44789;
unsigned long long int var_13 = 2639333696272425741ULL;
unsigned long long int var_14 = 10280649808786107258ULL;
long long int var_15 = 5102985847065011812LL;
short var_16 = (short)-740;
int zero = 0;
short var_17 = (short)9699;
unsigned short var_18 = (unsigned short)11747;
unsigned int var_19 = 2149834604U;
short var_20 = (short)-12593;
unsigned long long int var_21 = 15217205355553259843ULL;
int var_22 = -1645907746;
_Bool var_23 = (_Bool)0;
unsigned int var_24 = 2986869469U;
int var_25 = 1775476259;
long long int var_26 = -3336151671374078495LL;
unsigned int var_27 = 832316636U;
short var_28 = (short)28448;
unsigned long long int var_29 = 7836672116156235308ULL;
unsigned int var_30 = 3634986346U;
unsigned long long int arr_0 [21] ;
unsigned long long int arr_1 [21] ;
int arr_3 [21] [21] [21] ;
long long int arr_5 [21] [21] ;
short arr_10 [21] ;
unsigned char arr_2 [21] [21] ;
unsigned char arr_6 [21] [21] ;
unsigned short arr_21 [21] [21] [21] [21] [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? 2977209186368390328ULL : 3193535068392332711ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? 7270584525496691777ULL : 8653973324755163848ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? -719226617 : -2139206138;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_5 [i_0] [i_1] = (i_1 % 2 == 0) ? 5825525701991570854LL : 7003564976127574433LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_10 [i_0] = (i_0 % 2 == 0) ? (short)-10503 : (short)-20227;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_2 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned char)236 : (unsigned char)169;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_6 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned char)95 : (unsigned char)12;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 21; ++i_4) 
                        arr_21 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_3 % 2 == 0) ? (unsigned short)42205 : (unsigned short)46176;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
    hash(&seed, var_29);
    hash(&seed, var_30);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 21; ++i_4) 
                        hash(&seed, arr_21 [i_0] [i_1] [i_2] [i_3] [i_4] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
