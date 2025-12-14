#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)19;
unsigned char var_1 = (unsigned char)106;
unsigned short var_3 = (unsigned short)47858;
signed char var_5 = (signed char)5;
unsigned long long int var_6 = 6122414783568055930ULL;
unsigned short var_7 = (unsigned short)44317;
unsigned long long int var_9 = 11897224214983899147ULL;
short var_10 = (short)25487;
signed char var_12 = (signed char)-54;
long long int var_13 = -1058535823739197910LL;
int zero = 0;
short var_14 = (short)-5879;
signed char var_15 = (signed char)26;
signed char var_16 = (signed char)119;
unsigned long long int var_17 = 12244077320072715433ULL;
unsigned long long int var_18 = 8034003253843906255ULL;
unsigned long long int var_19 = 8243312106021425277ULL;
short arr_0 [23] [23] ;
short arr_2 [23] ;
signed char arr_4 [23] [23] [23] ;
long long int arr_6 [23] [23] [23] [23] ;
long long int arr_7 [23] [23] [23] [23] ;
unsigned short arr_12 [15] [15] ;
unsigned short arr_9 [23] [23] [23] ;
long long int arr_15 [15] ;
int arr_16 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_0 [i_0] [i_1] = (short)6472;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_2 [i_0] = (short)-21480;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (signed char)58;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    arr_6 [i_0] [i_1] [i_2] [i_3] = 8815894592201496128LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    arr_7 [i_0] [i_1] [i_2] [i_3] = 7483731219527326411LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_12 [i_0] [i_1] = (unsigned short)23978;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = (unsigned short)25675;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_15 [i_0] = -7903544756400225279LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_16 [i_0] = -783329527;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                hash(&seed, arr_9 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_15 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_16 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
