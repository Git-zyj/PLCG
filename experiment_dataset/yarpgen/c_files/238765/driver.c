#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 568446329U;
short var_5 = (short)-29940;
int var_7 = -1314491436;
short var_8 = (short)-18081;
int zero = 0;
long long int var_11 = -2949781183236108537LL;
unsigned long long int var_12 = 15785960180863122292ULL;
short var_13 = (short)-5702;
_Bool var_14 = (_Bool)0;
unsigned long long int arr_1 [25] ;
signed char arr_2 [25] ;
unsigned short arr_7 [25] [25] [25] [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_1 [i_0] = 749903116836982250ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_2 [i_0] = (signed char)-44;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    arr_7 [i_0] [i_1] [i_2] [i_3] = (unsigned short)25298;
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
