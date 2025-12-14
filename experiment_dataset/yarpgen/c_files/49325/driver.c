#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -226753067;
long long int var_1 = 7636107725438359863LL;
unsigned long long int var_2 = 11518651628379264289ULL;
signed char var_3 = (signed char)(-127 - 1);
signed char var_4 = (signed char)44;
signed char var_5 = (signed char)-112;
signed char var_6 = (signed char)97;
unsigned short var_7 = (unsigned short)7222;
unsigned long long int var_9 = 18377375418622522702ULL;
int zero = 0;
unsigned short var_10 = (unsigned short)62703;
unsigned int var_11 = 726931086U;
unsigned int var_12 = 88990420U;
short var_13 = (short)9514;
int var_14 = -2019968866;
int var_15 = 196341683;
unsigned char arr_0 [25] [25] ;
long long int arr_1 [25] [25] ;
unsigned int arr_2 [25] ;
signed char arr_4 [25] [25] [25] ;
unsigned short arr_6 [25] [25] [25] ;
long long int arr_7 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned char)82;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_1 [i_0] [i_1] = 5771899157532339124LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_2 [i_0] = 3991876231U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (signed char)-121;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (unsigned short)60440;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_7 [i_0] = -2833569856322979100LL;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_7 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
