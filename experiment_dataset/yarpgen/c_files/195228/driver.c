#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-13172;
long long int var_2 = 218404359676834499LL;
long long int var_3 = 8639625909902127332LL;
unsigned long long int var_6 = 15037187429027053747ULL;
short var_7 = (short)21443;
unsigned char var_9 = (unsigned char)150;
long long int var_11 = 5190402100909963793LL;
signed char var_16 = (signed char)60;
int zero = 0;
long long int var_17 = 8094787291338091858LL;
_Bool var_18 = (_Bool)0;
unsigned char var_19 = (unsigned char)90;
int var_20 = -30176590;
int var_21 = 1205264526;
unsigned int var_22 = 1333036839U;
unsigned long long int var_23 = 3305503060939968166ULL;
short var_24 = (short)17082;
unsigned long long int var_25 = 16377462288414761631ULL;
short var_26 = (short)4913;
unsigned char var_27 = (unsigned char)111;
unsigned short var_28 = (unsigned short)45885;
long long int var_29 = -9148703842227832531LL;
long long int var_30 = 7780036517898625468LL;
unsigned char var_31 = (unsigned char)167;
long long int arr_0 [22] ;
short arr_1 [22] ;
unsigned char arr_2 [22] [22] ;
short arr_4 [22] [22] [22] ;
long long int arr_15 [22] [22] [22] [22] [22] [22] ;
long long int arr_16 [22] [22] [22] [22] [22] ;
long long int arr_19 [22] ;
unsigned int arr_18 [22] [22] [22] ;
unsigned char arr_25 [22] [22] [22] [22] [22] ;
unsigned int arr_30 [22] ;
unsigned long long int arr_31 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_0 [i_0] = -2802017213540512957LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_1 [i_0] = (short)30635;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_2 [i_0] [i_1] = (unsigned char)132;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (short)-19251;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 22; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 22; ++i_5) 
                            arr_15 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = -5571522845864498768LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 22; ++i_4) 
                        arr_16 [i_0] [i_1] [i_2] [i_3] [i_4] = 2288010558686608001LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_19 [i_0] = -3701923654824900357LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_18 [i_0] [i_1] [i_2] = 1129123038U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 22; ++i_4) 
                        arr_25 [i_0] [i_1] [i_2] [i_3] [i_4] = (unsigned char)153;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_30 [i_0] = 35790026U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_31 [i_0] = 3575686749600250056ULL;
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
    hash(&seed, var_31);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                hash(&seed, arr_18 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 22; ++i_4) 
                        hash(&seed, arr_25 [i_0] [i_1] [i_2] [i_3] [i_4] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_30 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_31 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
