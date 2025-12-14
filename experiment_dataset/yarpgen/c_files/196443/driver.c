#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)104;
int var_2 = 1788309508;
_Bool var_3 = (_Bool)1;
long long int var_4 = -6395139415315016296LL;
unsigned int var_5 = 2131222093U;
_Bool var_6 = (_Bool)1;
long long int var_9 = -1306489348976971717LL;
unsigned long long int var_10 = 1759503024107125645ULL;
unsigned long long int var_11 = 1104751352782877529ULL;
int var_15 = -767195824;
int var_16 = -1754374822;
int zero = 0;
short var_19 = (short)-24073;
unsigned int var_20 = 3445132363U;
long long int var_21 = -1181673246697650504LL;
signed char var_22 = (signed char)15;
int var_23 = -1646720132;
_Bool var_24 = (_Bool)1;
_Bool var_25 = (_Bool)0;
_Bool var_26 = (_Bool)1;
unsigned short var_27 = (unsigned short)36000;
_Bool var_28 = (_Bool)0;
long long int var_29 = 4028739571737776954LL;
unsigned short var_30 = (unsigned short)4576;
short var_31 = (short)-4285;
int var_32 = -1698446532;
signed char var_33 = (signed char)38;
_Bool arr_3 [13] [13] ;
signed char arr_7 [13] [13] [13] [13] [13] ;
unsigned int arr_22 [13] [13] [13] ;
int arr_26 [13] [13] [13] [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_3 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 13; ++i_4) 
                        arr_7 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_3 % 2 == 0) ? (signed char)34 : (signed char)-22;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_22 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? 3155939742U : 1088058222U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    arr_26 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? -1926084157 : 1406402725;
}

void checksum() {
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
    hash(&seed, var_31);
    hash(&seed, var_32);
    hash(&seed, var_33);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                hash(&seed, arr_22 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    hash(&seed, arr_26 [i_0] [i_1] [i_2] [i_3] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
