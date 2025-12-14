#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-48;
unsigned int var_1 = 601781899U;
unsigned short var_2 = (unsigned short)25626;
short var_3 = (short)4492;
_Bool var_4 = (_Bool)0;
signed char var_5 = (signed char)78;
unsigned char var_6 = (unsigned char)250;
unsigned char var_7 = (unsigned char)165;
long long int var_8 = -5472861221355583830LL;
long long int var_9 = 7397053068302744961LL;
unsigned short var_10 = (unsigned short)47605;
unsigned char var_11 = (unsigned char)159;
int zero = 0;
unsigned long long int var_12 = 8957772333738032992ULL;
long long int var_13 = 8089918661836305696LL;
long long int var_14 = 97334996766533659LL;
signed char var_15 = (signed char)-99;
long long int var_16 = -4908429623181068488LL;
long long int var_17 = 937976422200852328LL;
long long int var_18 = 314783384193365202LL;
long long int var_19 = 1234027702318456089LL;
long long int var_20 = -4642014061232548057LL;
short var_21 = (short)-20472;
_Bool var_22 = (_Bool)0;
signed char var_23 = (signed char)-107;
int arr_0 [20] ;
unsigned long long int arr_1 [20] ;
int arr_2 [25] ;
unsigned long long int arr_3 [25] [25] ;
short arr_6 [25] ;
long long int arr_8 [25] [25] ;
long long int arr_10 [24] [24] ;
long long int arr_4 [25] [25] ;
unsigned int arr_5 [25] ;
long long int arr_13 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_0 [i_0] = -84630048;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_1 [i_0] = 5833093214325500517ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_2 [i_0] = -928437138;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_3 [i_0] [i_1] = (i_0 % 2 == 0) ? 7213907660951968049ULL : 9508937110460236704ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_6 [i_0] = (short)20457;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_8 [i_0] [i_1] = 7536767224326448736LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_10 [i_0] [i_1] = 8315173441929341063LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_4 [i_0] [i_1] = (i_1 % 2 == 0) ? -5529251905501574048LL : 6464959392521586228LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? 2505706482U : 460360730U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_13 [i_0] = 3078562164652514273LL;
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
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_13 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
