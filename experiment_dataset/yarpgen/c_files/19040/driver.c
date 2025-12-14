#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-76;
long long int var_2 = 579589769028982124LL;
short var_3 = (short)4425;
short var_4 = (short)-22923;
unsigned short var_5 = (unsigned short)42537;
unsigned short var_6 = (unsigned short)49254;
_Bool var_7 = (_Bool)1;
unsigned int var_8 = 1579061312U;
signed char var_9 = (signed char)120;
long long int var_11 = 2065464876431357923LL;
unsigned int var_12 = 410915454U;
unsigned short var_13 = (unsigned short)64279;
short var_14 = (short)-18616;
_Bool var_17 = (_Bool)1;
long long int var_18 = 7906314686334169413LL;
unsigned int var_19 = 2487674539U;
int zero = 0;
long long int var_20 = -8416599101129914829LL;
short var_21 = (short)11333;
signed char var_22 = (signed char)115;
short var_23 = (short)-23112;
unsigned short var_24 = (unsigned short)47074;
int var_25 = 132063240;
long long int arr_0 [10] ;
unsigned long long int arr_5 [10] ;
unsigned int arr_6 [10] [10] [10] [10] ;
signed char arr_7 [10] [10] [10] ;
_Bool arr_10 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_0 [i_0] = 8744186931403323145LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? 15347356133693081589ULL : 13489038647346194244ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    arr_6 [i_0] [i_1] [i_2] [i_3] = (i_3 % 2 == 0) ? 577012996U : 2832436136U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (signed char)-12 : (signed char)-30;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_10 [i_0] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)1;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_10 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
