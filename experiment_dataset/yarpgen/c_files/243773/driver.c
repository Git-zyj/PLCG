#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 2632136206402405575LL;
unsigned long long int var_2 = 9364977648208644759ULL;
unsigned long long int var_6 = 10018608529304941842ULL;
unsigned short var_7 = (unsigned short)8389;
unsigned long long int var_8 = 2817736323882096765ULL;
int var_9 = 1405645150;
unsigned int var_10 = 3910406972U;
unsigned long long int var_11 = 838524380247671080ULL;
unsigned long long int var_12 = 15235088083515241379ULL;
unsigned short var_13 = (unsigned short)34124;
unsigned short var_16 = (unsigned short)56001;
int zero = 0;
unsigned long long int var_19 = 13879045110587259596ULL;
unsigned short var_20 = (unsigned short)40309;
int var_21 = 260409046;
unsigned int var_22 = 1329277169U;
unsigned short var_23 = (unsigned short)1658;
int arr_0 [20] ;
unsigned short arr_1 [20] ;
unsigned int arr_2 [20] [20] [20] ;
unsigned long long int arr_3 [20] [20] [20] ;
int arr_7 [20] [20] ;
unsigned short arr_8 [20] [20] [20] [20] ;
unsigned char arr_9 [20] [20] [20] [20] ;
unsigned int arr_10 [20] [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? -422819538 : -1297285368;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? (unsigned short)63595 : (unsigned short)4362;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = 1570881777U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = 3432537624706015909ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_7 [i_0] [i_1] = (i_1 % 2 == 0) ? 1262746681 : -267387123;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    arr_8 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? (unsigned short)60746 : (unsigned short)26304;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    arr_9 [i_0] [i_1] [i_2] [i_3] = (i_3 % 2 == 0) ? (unsigned char)117 : (unsigned char)119;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_10 [i_0] [i_1] = (i_1 % 2 == 0) ? 3219751506U : 2909223711U;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            hash(&seed, arr_10 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
