#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_4 = (signed char)45;
unsigned long long int var_5 = 12756344421697024296ULL;
int var_9 = 1367112467;
int var_10 = -1040309361;
short var_11 = (short)-31868;
signed char var_14 = (signed char)-102;
signed char var_15 = (signed char)72;
short var_16 = (short)-2176;
signed char var_17 = (signed char)-118;
int zero = 0;
unsigned long long int var_18 = 2790263341005832883ULL;
unsigned long long int var_19 = 1092830295890436078ULL;
int var_20 = -873881402;
unsigned short var_21 = (unsigned short)60327;
int var_22 = 1517653431;
unsigned long long int var_23 = 7470939862428021437ULL;
unsigned short var_24 = (unsigned short)56460;
unsigned int var_25 = 3463564476U;
signed char var_26 = (signed char)124;
long long int var_27 = -4695596401246158136LL;
int var_28 = 1078675072;
int var_29 = -451632103;
short arr_1 [22] ;
int arr_4 [18] [18] ;
unsigned long long int arr_5 [18] ;
signed char arr_6 [18] [18] [18] ;
_Bool arr_8 [18] ;
long long int arr_9 [18] ;
int arr_10 [18] [18] [18] [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_1 [i_0] = (short)32560;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_4 [i_0] [i_1] = -452427346;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_5 [i_0] = 4964463963546443650ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (signed char)-3;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_8 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_9 [i_0] = -410965621558969224LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    arr_10 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? 493265730 : -429484894;
}

void checksum() {
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
