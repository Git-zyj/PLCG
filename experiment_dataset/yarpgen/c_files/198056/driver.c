#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 1061982007856820779LL;
unsigned char var_1 = (unsigned char)157;
unsigned char var_2 = (unsigned char)103;
int var_3 = 447392536;
long long int var_5 = -4514046726180438359LL;
signed char var_6 = (signed char)47;
unsigned char var_8 = (unsigned char)223;
long long int var_9 = -4912624843348460921LL;
signed char var_10 = (signed char)-38;
int var_11 = 162838368;
int zero = 0;
unsigned long long int var_12 = 7407956957913004241ULL;
long long int var_13 = -3894719517515917893LL;
unsigned int var_14 = 2483625155U;
unsigned long long int var_15 = 18118239504339040222ULL;
unsigned int var_16 = 1569118024U;
unsigned char var_17 = (unsigned char)252;
unsigned short var_18 = (unsigned short)59247;
short var_19 = (short)20656;
unsigned char var_20 = (unsigned char)178;
int var_21 = -1082758891;
short var_22 = (short)-28362;
long long int var_23 = -2445637177646246097LL;
unsigned short var_24 = (unsigned short)51648;
long long int var_25 = -751317460601501172LL;
signed char var_26 = (signed char)-26;
short var_27 = (short)-16718;
unsigned char var_28 = (unsigned char)250;
unsigned long long int arr_1 [14] [14] ;
unsigned char arr_3 [14] [14] ;
int arr_4 [14] [14] ;
signed char arr_5 [14] [14] ;
_Bool arr_6 [14] ;
unsigned int arr_7 [14] [14] [14] [14] ;
unsigned short arr_8 [14] [14] [14] [14] [14] ;
signed char arr_9 [14] [14] [14] [14] [14] [14] ;
unsigned int arr_10 [22] ;
long long int arr_11 [22] ;
unsigned int arr_13 [22] [22] [22] ;
signed char arr_14 [22] ;
signed char arr_17 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_1 [i_0] [i_1] = (i_1 % 2 == 0) ? 16843323686429558442ULL : 16939597972474075272ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_3 [i_0] [i_1] = (unsigned char)179;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_4 [i_0] [i_1] = (i_0 % 2 == 0) ? 1995085200 : 1339836116;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_5 [i_0] [i_1] = (signed char)40;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    arr_7 [i_0] [i_1] [i_2] [i_3] = 3646865070U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 14; ++i_4) 
                        arr_8 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_3 % 2 == 0) ? (unsigned short)39117 : (unsigned short)32559;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 14; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 14; ++i_5) 
                            arr_9 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_2 % 2 == 0) ? (signed char)93 : (signed char)-13;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_10 [i_0] = 1205637985U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_11 [i_0] = -2680849050542261340LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_13 [i_0] [i_1] [i_2] = 1217986079U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_14 [i_0] = (i_0 % 2 == 0) ? (signed char)-124 : (signed char)-105;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_17 [i_0] = (signed char)127;
}

void checksum() {
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
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
