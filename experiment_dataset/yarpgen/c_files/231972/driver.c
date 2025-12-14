#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)50942;
unsigned int var_1 = 2482604374U;
long long int var_2 = -37952669367423651LL;
signed char var_3 = (signed char)-111;
unsigned int var_4 = 1623559711U;
_Bool var_5 = (_Bool)0;
unsigned int var_9 = 1456003518U;
unsigned long long int var_14 = 8374778130404972974ULL;
short var_17 = (short)25529;
signed char var_18 = (signed char)62;
int zero = 0;
unsigned long long int var_19 = 6240435332153467236ULL;
unsigned long long int var_20 = 135235629973438101ULL;
unsigned int var_21 = 2374225679U;
unsigned short var_22 = (unsigned short)40660;
unsigned char var_23 = (unsigned char)133;
signed char var_24 = (signed char)5;
long long int arr_0 [24] [24] ;
short arr_1 [24] ;
unsigned short arr_3 [24] [24] [24] ;
long long int arr_4 [24] [24] [24] ;
unsigned long long int arr_6 [24] [24] [24] [24] ;
unsigned long long int arr_18 [24] [24] [24] [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_0 [i_0] [i_1] = -6354324580290545864LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_1 [i_0] = (short)-26093;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (unsigned short)8444;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = 4750266598896480963LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    arr_6 [i_0] [i_1] [i_2] [i_3] = 1798312311652553003ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    arr_18 [i_0] [i_1] [i_2] [i_3] = 15809585211536524277ULL;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    hash(&seed, arr_18 [i_0] [i_1] [i_2] [i_3] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
