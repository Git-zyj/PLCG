#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-19026;
unsigned long long int var_3 = 14933044635651480617ULL;
unsigned int var_4 = 1163849465U;
long long int var_6 = -4834299853980831638LL;
_Bool var_8 = (_Bool)1;
_Bool var_11 = (_Bool)1;
unsigned int var_15 = 993252778U;
unsigned long long int var_16 = 16217876132111096912ULL;
unsigned long long int var_17 = 17715411141218479272ULL;
unsigned int var_18 = 4040407451U;
int zero = 0;
long long int var_19 = -978015998457399495LL;
_Bool var_20 = (_Bool)1;
long long int var_21 = 3676217525749603716LL;
_Bool var_22 = (_Bool)1;
unsigned int var_23 = 3664397836U;
long long int var_24 = 9147764842945866749LL;
_Bool var_25 = (_Bool)0;
long long int arr_0 [21] ;
signed char arr_1 [21] [21] ;
_Bool arr_4 [21] [21] [21] [21] ;
unsigned int arr_7 [21] ;
_Bool arr_8 [21] [21] [21] [21] [21] ;
short arr_9 [21] [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_0 [i_0] = -1911126616235949225LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_1 [i_0] [i_1] = (signed char)-63;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    arr_4 [i_0] [i_1] [i_2] [i_3] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_7 [i_0] = 1455658998U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 21; ++i_4) 
                        arr_8 [i_0] [i_1] [i_2] [i_3] [i_4] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_9 [i_0] [i_1] = (i_0 % 2 == 0) ? (short)-2263 : (short)9685;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
