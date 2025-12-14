#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1738288402U;
signed char var_1 = (signed char)3;
long long int var_2 = 6393403701035696461LL;
unsigned long long int var_3 = 9962411313226695043ULL;
short var_4 = (short)13257;
unsigned long long int var_5 = 15567215170900270575ULL;
long long int var_7 = 1188660263813423186LL;
short var_9 = (short)19745;
unsigned short var_10 = (unsigned short)11555;
unsigned int var_11 = 2289189520U;
int zero = 0;
unsigned char var_12 = (unsigned char)218;
unsigned char var_13 = (unsigned char)7;
unsigned int var_14 = 2383648700U;
_Bool var_15 = (_Bool)0;
unsigned long long int var_16 = 16514692289109860669ULL;
unsigned int var_17 = 166931225U;
int var_18 = 1152706051;
unsigned long long int arr_3 [15] ;
int arr_5 [15] [15] [15] [15] ;
unsigned int arr_8 [15] [15] [15] [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_3 [i_0] = 3426304859694636340ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    arr_5 [i_0] [i_1] [i_2] [i_3] = -432429261;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    arr_8 [i_0] [i_1] [i_2] [i_3] = 886479115U;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
