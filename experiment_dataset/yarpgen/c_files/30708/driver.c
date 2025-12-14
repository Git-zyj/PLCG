#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 487818973U;
long long int var_2 = 1802726941696005378LL;
long long int var_3 = 6587080905047846102LL;
int var_5 = -255713743;
short var_7 = (short)-9554;
long long int var_8 = -4262830342097714326LL;
unsigned short var_10 = (unsigned short)27042;
int var_11 = 646204450;
int var_12 = -1282476649;
unsigned char var_13 = (unsigned char)39;
int var_14 = 1219391674;
long long int var_15 = -466055484386516701LL;
_Bool var_16 = (_Bool)1;
short var_18 = (short)-17134;
int var_19 = -1000911900;
int zero = 0;
short var_20 = (short)30561;
int var_21 = -314530935;
int var_22 = -1788549138;
long long int var_23 = 1391056223341033605LL;
long long int var_24 = 849416131021519620LL;
short var_25 = (short)-19268;
int var_26 = -1200854606;
signed char var_27 = (signed char)-66;
signed char var_28 = (signed char)21;
int var_29 = 815623366;
signed char var_30 = (signed char)44;
unsigned char var_31 = (unsigned char)171;
int var_32 = -2068237001;
signed char var_33 = (signed char)1;
unsigned short var_34 = (unsigned short)61709;
_Bool var_35 = (_Bool)1;
signed char var_36 = (signed char)-25;
long long int var_37 = 8656946211476269760LL;
_Bool var_38 = (_Bool)0;
unsigned int var_39 = 1098538707U;
unsigned int var_40 = 988504827U;
signed char arr_0 [23] [23] ;
short arr_1 [23] ;
unsigned long long int arr_3 [23] [23] [23] ;
signed char arr_5 [23] [23] ;
long long int arr_7 [23] [23] ;
unsigned long long int arr_9 [23] [23] [23] [23] [23] ;
unsigned long long int arr_10 [23] [23] [23] [23] [23] [23] ;
unsigned int arr_11 [23] [23] [23] [23] [23] ;
long long int arr_13 [23] [23] [23] [23] ;
int arr_14 [23] ;
signed char arr_15 [23] [23] ;
unsigned short arr_22 [25] ;
int arr_23 [25] ;
unsigned char arr_24 [25] ;
signed char arr_8 [23] [23] [23] ;
signed char arr_16 [23] [23] ;
int arr_25 [25] [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_0 [i_0] [i_1] = (signed char)-78;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_1 [i_0] = (short)12136;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = 1034780336298884908ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_5 [i_0] [i_1] = (signed char)-112;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_7 [i_0] [i_1] = -4842525312941835309LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 23; ++i_4) 
                        arr_9 [i_0] [i_1] [i_2] [i_3] [i_4] = 17353434751131309534ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 23; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 23; ++i_5) 
                            arr_10 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = 11792881802350404835ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 23; ++i_4) 
                        arr_11 [i_0] [i_1] [i_2] [i_3] [i_4] = 21128003U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    arr_13 [i_0] [i_1] [i_2] [i_3] = (i_3 % 2 == 0) ? 8683352277975654448LL : 157089793811888643LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_14 [i_0] = -1335632191;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_15 [i_0] [i_1] = (signed char)-123;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_22 [i_0] = (unsigned short)54890;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_23 [i_0] = -1078894486;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_24 [i_0] = (unsigned char)13;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (signed char)-97 : (signed char)7;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_16 [i_0] [i_1] = (signed char)118;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_25 [i_0] [i_1] = -728516616;
}

void checksum() {
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
    hash(&seed, var_34);
    hash(&seed, var_35);
    hash(&seed, var_36);
    hash(&seed, var_37);
    hash(&seed, var_38);
    hash(&seed, var_39);
    hash(&seed, var_40);
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                hash(&seed, arr_8 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            hash(&seed, arr_16 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            hash(&seed, arr_25 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
