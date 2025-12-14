#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 370428782U;
signed char var_3 = (signed char)-63;
long long int var_4 = -7061939689958728378LL;
short var_6 = (short)-20930;
signed char var_9 = (signed char)45;
signed char var_10 = (signed char)-25;
long long int var_11 = 7778239917931529969LL;
int zero = 0;
int var_12 = 990995545;
signed char var_13 = (signed char)21;
long long int var_14 = 3699667175562521949LL;
unsigned int var_15 = 2530608208U;
int var_16 = 302258714;
long long int var_17 = 1137241730695618907LL;
long long int var_18 = 8238470178947774154LL;
long long int arr_1 [25] ;
long long int arr_3 [25] [25] ;
long long int arr_4 [25] ;
unsigned int arr_13 [25] [25] [25] [25] ;
long long int arr_16 [25] [25] [25] [25] [25] ;
short arr_11 [25] [25] [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? 6014609501881470959LL : -8655154223875084299LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_3 [i_0] [i_1] = -3226485449801780475LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? 4038378559163353293LL : 3963037336416980183LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    arr_13 [i_0] [i_1] [i_2] [i_3] = 2275827504U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 25; ++i_4) 
                        arr_16 [i_0] [i_1] [i_2] [i_3] [i_4] = -2881345056267761827LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_11 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (short)4995 : (short)28614;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                hash(&seed, arr_11 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
