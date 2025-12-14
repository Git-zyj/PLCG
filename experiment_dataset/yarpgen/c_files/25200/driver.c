#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 15088841180151602905ULL;
unsigned long long int var_1 = 16119012783514514867ULL;
long long int var_10 = -5736777841979024515LL;
unsigned short var_11 = (unsigned short)15118;
unsigned long long int var_12 = 9763988408190617511ULL;
unsigned long long int var_14 = 8799414658341221427ULL;
unsigned long long int var_15 = 1378898844297910647ULL;
int zero = 0;
unsigned char var_17 = (unsigned char)12;
unsigned int var_18 = 1697999107U;
unsigned short var_19 = (unsigned short)25349;
unsigned short var_20 = (unsigned short)18193;
short var_21 = (short)7823;
unsigned int var_22 = 1602047142U;
unsigned short var_23 = (unsigned short)21275;
long long int var_24 = -7414384929383527626LL;
unsigned int var_25 = 348313186U;
short var_26 = (short)11600;
unsigned short var_27 = (unsigned short)49633;
unsigned short arr_1 [19] [19] ;
unsigned int arr_9 [23] [23] [23] [23] ;
unsigned short arr_10 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned short)48416;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    arr_9 [i_0] [i_1] [i_2] [i_3] = 4259843924U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_10 [i_0] = (unsigned short)35522;
}

void checksum() {
    hash(&seed, var_17);
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
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_10 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
