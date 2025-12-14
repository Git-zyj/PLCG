#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 210508721;
unsigned long long int var_1 = 18335914250262142273ULL;
int var_2 = 1214746031;
_Bool var_4 = (_Bool)0;
signed char var_5 = (signed char)57;
unsigned int var_6 = 3053424472U;
signed char var_7 = (signed char)-16;
short var_8 = (short)-29507;
signed char var_10 = (signed char)-121;
unsigned long long int var_12 = 7083547332357091167ULL;
signed char var_13 = (signed char)-71;
signed char var_14 = (signed char)84;
int var_15 = 1758690903;
_Bool var_16 = (_Bool)1;
_Bool var_19 = (_Bool)1;
int zero = 0;
signed char var_20 = (signed char)58;
_Bool var_21 = (_Bool)1;
signed char var_22 = (signed char)-83;
unsigned char var_23 = (unsigned char)47;
unsigned short var_24 = (unsigned short)15091;
int var_25 = -1217097967;
signed char var_26 = (signed char)-124;
signed char arr_2 [25] ;
_Bool arr_7 [25] ;
_Bool arr_9 [25] [25] [25] [25] [25] [25] ;
unsigned long long int arr_11 [25] [25] [25] [25] [25] [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_2 [i_0] = (signed char)-91;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_7 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 25; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 25; ++i_5) 
                            arr_9 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 25; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 25; ++i_5) 
                            arr_11 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = 9053511070354075148ULL;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
