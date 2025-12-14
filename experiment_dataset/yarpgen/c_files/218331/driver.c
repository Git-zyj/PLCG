#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
signed char var_3 = (signed char)-122;
signed char var_4 = (signed char)39;
int var_5 = -1931118151;
signed char var_6 = (signed char)-17;
unsigned long long int var_9 = 5096943767419141855ULL;
int zero = 0;
signed char var_10 = (signed char)-45;
unsigned long long int var_11 = 5570717315029968451ULL;
signed char var_12 = (signed char)85;
unsigned long long int var_13 = 11918452680168883777ULL;
long long int var_14 = 6075471956675700522LL;
long long int var_15 = -9216088491842414742LL;
unsigned long long int var_16 = 6789437010337260017ULL;
unsigned short var_17 = (unsigned short)47449;
unsigned short var_18 = (unsigned short)21497;
signed char var_19 = (signed char)16;
unsigned long long int arr_1 [19] [19] ;
long long int arr_2 [19] ;
_Bool arr_3 [19] [19] ;
signed char arr_4 [19] [19] [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_1 [i_0] [i_1] = 5555884368599118038ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? 5767076453573157648LL : -3750561875425760691LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_3 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (signed char)-121 : (signed char)-54;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
