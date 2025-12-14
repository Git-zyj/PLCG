#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)7864;
long long int var_3 = 3678497161200165987LL;
long long int var_4 = 1619101841877846917LL;
unsigned int var_7 = 450145053U;
int var_8 = 853001336;
int var_13 = 551973591;
int var_15 = 1058217705;
unsigned char var_16 = (unsigned char)213;
signed char var_18 = (signed char)120;
int zero = 0;
signed char var_19 = (signed char)120;
unsigned int var_20 = 723433364U;
_Bool var_21 = (_Bool)0;
_Bool var_22 = (_Bool)1;
_Bool var_23 = (_Bool)0;
unsigned long long int var_24 = 9419373494302173548ULL;
signed char arr_7 [19] ;
unsigned long long int arr_14 [19] ;
int arr_15 [19] [19] [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_7 [i_0] = (i_0 % 2 == 0) ? (signed char)-51 : (signed char)2;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_14 [i_0] = (i_0 % 2 == 0) ? 9567792715685548155ULL : 5983386174980370237ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_15 [i_0] [i_1] [i_2] = 1157377177;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_14 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                hash(&seed, arr_15 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
