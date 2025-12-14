#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2399547625U;
unsigned char var_1 = (unsigned char)255;
long long int var_3 = -8150183596319721375LL;
unsigned char var_4 = (unsigned char)211;
_Bool var_5 = (_Bool)0;
long long int var_7 = 3866597312621534807LL;
unsigned short var_8 = (unsigned short)2332;
unsigned long long int var_9 = 12024601342225092340ULL;
unsigned char var_11 = (unsigned char)98;
short var_12 = (short)11910;
unsigned int var_13 = 1503967948U;
long long int var_14 = -4957344033932822877LL;
unsigned int var_15 = 3203075854U;
long long int var_17 = 7037581569764767685LL;
int zero = 0;
unsigned char var_18 = (unsigned char)78;
unsigned char var_19 = (unsigned char)249;
unsigned long long int var_20 = 13063620536450549575ULL;
unsigned int var_21 = 2393557263U;
unsigned int var_22 = 1568580956U;
signed char var_23 = (signed char)92;
unsigned long long int var_24 = 10507874382791421747ULL;
int var_25 = 2052194375;
int var_26 = -1306258145;
unsigned char var_27 = (unsigned char)90;
unsigned int arr_2 [22] [22] ;
unsigned int arr_3 [22] [22] ;
unsigned int arr_4 [22] ;
signed char arr_6 [22] ;
unsigned int arr_9 [22] [22] [22] [22] [22] ;
unsigned char arr_11 [22] [22] [22] [22] [22] [22] ;
unsigned long long int arr_13 [22] [22] ;
unsigned long long int arr_15 [22] [22] ;
unsigned long long int arr_23 [21] [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_2 [i_0] [i_1] = (i_1 % 2 == 0) ? 593636580U : 1534001881U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_3 [i_0] [i_1] = 4005318931U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_4 [i_0] = 3125625470U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? (signed char)59 : (signed char)-77;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 22; ++i_4) 
                        arr_9 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_0 % 2 == 0) ? 1592562053U : 1135217827U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 22; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 22; ++i_5) 
                            arr_11 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_0 % 2 == 0) ? (unsigned char)73 : (unsigned char)108;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_13 [i_0] [i_1] = 7061004033819713012ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_15 [i_0] [i_1] = (i_1 % 2 == 0) ? 2107960052787784741ULL : 9316830992289476943ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_23 [i_0] [i_1] = (i_1 % 2 == 0) ? 9342039097260217005ULL : 7894081987008183160ULL;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            hash(&seed, arr_15 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            hash(&seed, arr_23 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
