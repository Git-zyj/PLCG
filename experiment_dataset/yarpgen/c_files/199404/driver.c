#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -2819588439528974236LL;
unsigned short var_1 = (unsigned short)57194;
signed char var_2 = (signed char)-43;
long long int var_3 = -7891731091588588966LL;
signed char var_4 = (signed char)-127;
_Bool var_5 = (_Bool)1;
int var_6 = 816487788;
unsigned int var_7 = 4243493443U;
unsigned int var_8 = 3719397729U;
unsigned long long int var_9 = 12570356501601338321ULL;
unsigned int var_10 = 1832409332U;
int zero = 0;
unsigned int var_11 = 1520769722U;
int var_12 = 1451385297;
unsigned long long int var_13 = 14467870701703076873ULL;
unsigned int var_14 = 1224799762U;
unsigned short arr_2 [24] [24] ;
unsigned short arr_3 [24] [24] [24] ;
unsigned long long int arr_5 [24] [24] [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_2 [i_0] [i_1] = (unsigned short)51743;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (unsigned short)43468;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = 899136587003952148ULL;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
