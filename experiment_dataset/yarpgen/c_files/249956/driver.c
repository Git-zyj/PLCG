#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)89;
unsigned short var_1 = (unsigned short)34702;
unsigned long long int var_2 = 13807000105711595307ULL;
unsigned char var_3 = (unsigned char)50;
unsigned char var_5 = (unsigned char)247;
unsigned char var_6 = (unsigned char)144;
signed char var_7 = (signed char)72;
short var_8 = (short)-31439;
unsigned char var_9 = (unsigned char)244;
int var_10 = 216118774;
int var_11 = 1638556369;
unsigned int var_12 = 1127170643U;
int zero = 0;
int var_13 = 986453195;
int var_14 = 1146018047;
unsigned char var_15 = (unsigned char)134;
unsigned long long int var_16 = 15130524007996176872ULL;
signed char var_17 = (signed char)80;
unsigned char var_18 = (unsigned char)178;
unsigned char var_19 = (unsigned char)105;
unsigned char arr_0 [17] ;
short arr_1 [17] [17] ;
unsigned long long int arr_3 [10] [10] ;
int arr_4 [10] [10] ;
unsigned char arr_2 [17] ;
int arr_5 [10] [10] ;
int arr_6 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_0 [i_0] = (unsigned char)150;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_1 [i_0] [i_1] = (short)7134;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_3 [i_0] [i_1] = 7913185802179448048ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_4 [i_0] [i_1] = 148162267;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? (unsigned char)15 : (unsigned char)220;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_5 [i_0] [i_1] = -1594830810;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_6 [i_0] = 1174823856;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            hash(&seed, arr_5 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
