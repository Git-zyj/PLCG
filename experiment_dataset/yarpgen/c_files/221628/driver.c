#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)77;
short var_3 = (short)-21647;
_Bool var_4 = (_Bool)1;
long long int var_9 = -529529376024578566LL;
unsigned long long int var_10 = 367274746399350760ULL;
_Bool var_11 = (_Bool)0;
int var_13 = -448363106;
unsigned int var_15 = 403851461U;
long long int var_16 = 8792612894560149569LL;
int zero = 0;
long long int var_18 = -7209086571858868079LL;
unsigned int var_19 = 4255257804U;
int var_20 = -1291137186;
unsigned int var_21 = 2773638812U;
unsigned long long int var_22 = 12324011946682247614ULL;
_Bool var_23 = (_Bool)1;
int var_24 = 1679772652;
int arr_5 [25] ;
unsigned char arr_6 [25] ;
short arr_7 [25] ;
unsigned int arr_9 [25] ;
short arr_12 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_5 [i_0] = -1697014862;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_6 [i_0] = (unsigned char)217;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_7 [i_0] = (short)-23491;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_9 [i_0] = 3848253184U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_12 [i_0] = (short)-11100;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_12 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
