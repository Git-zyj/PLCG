#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 9861836393493510796ULL;
unsigned int var_2 = 1914811430U;
int var_3 = 567582578;
int var_4 = -109002896;
unsigned int var_5 = 1258322205U;
int var_6 = 40205478;
int var_7 = 543485610;
unsigned char var_9 = (unsigned char)234;
signed char var_10 = (signed char)-58;
int zero = 0;
unsigned char var_11 = (unsigned char)33;
long long int var_12 = 2769429925583459328LL;
unsigned int var_13 = 1217400788U;
unsigned short var_14 = (unsigned short)21589;
unsigned int var_15 = 1058934018U;
long long int var_16 = 8747084333886831805LL;
unsigned char var_17 = (unsigned char)237;
long long int var_18 = 4984354867782825511LL;
signed char var_19 = (signed char)72;
long long int var_20 = 3827303771118242570LL;
unsigned short var_21 = (unsigned short)10893;
_Bool var_22 = (_Bool)0;
long long int var_23 = -1503868149560738053LL;
unsigned long long int var_24 = 1598714723681817000ULL;
_Bool var_25 = (_Bool)0;
unsigned int arr_1 [17] [17] ;
long long int arr_3 [17] ;
unsigned char arr_4 [17] [17] ;
signed char arr_5 [17] [17] ;
unsigned int arr_7 [17] [17] ;
unsigned long long int arr_8 [17] [17] [17] [17] ;
unsigned int arr_12 [17] [17] [17] [17] ;
unsigned long long int arr_15 [17] ;
_Bool arr_18 [24] ;
signed char arr_2 [17] [17] ;
unsigned long long int arr_17 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_1 [i_0] [i_1] = 1601908975U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? 4408159859264341045LL : 5942463291435913953LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_4 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned char)147 : (unsigned char)130;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_5 [i_0] [i_1] = (i_0 % 2 == 0) ? (signed char)-5 : (signed char)-63;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_7 [i_0] [i_1] = 600331652U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    arr_8 [i_0] [i_1] [i_2] [i_3] = 17376374027529308223ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    arr_12 [i_0] [i_1] [i_2] [i_3] = 714630578U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_15 [i_0] = (i_0 % 2 == 0) ? 17400178440218352743ULL : 15898776231012628675ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_18 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_2 [i_0] [i_1] = (signed char)-17;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_17 [i_0] = (i_0 % 2 == 0) ? 13249994868041141149ULL : 5051418412197640471ULL;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_17 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
