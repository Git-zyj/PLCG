#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 4162346522U;
long long int var_2 = -6062922099197080439LL;
unsigned int var_3 = 3388183602U;
unsigned int var_4 = 1863241643U;
long long int var_5 = -5951524016089980837LL;
long long int var_7 = 4537541664381762426LL;
unsigned short var_8 = (unsigned short)675;
unsigned int var_9 = 436378013U;
int var_11 = 949572441;
int zero = 0;
signed char var_14 = (signed char)59;
unsigned long long int var_15 = 7104109003562223914ULL;
_Bool var_16 = (_Bool)1;
unsigned int var_17 = 1236509188U;
signed char var_18 = (signed char)-5;
unsigned long long int var_19 = 3479925652825028716ULL;
int var_20 = 1102300284;
short var_21 = (short)-10822;
_Bool var_22 = (_Bool)1;
unsigned int arr_0 [18] ;
signed char arr_3 [18] ;
int arr_6 [18] [18] ;
signed char arr_15 [18] [18] [18] [18] [18] ;
unsigned long long int arr_7 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_0 [i_0] = 3553432903U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_3 [i_0] = (signed char)94;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_6 [i_0] [i_1] = -380851475;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 18; ++i_4) 
                        arr_15 [i_0] [i_1] [i_2] [i_3] [i_4] = (signed char)99;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_7 [i_0] = 12334986349897856523ULL;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_7 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
