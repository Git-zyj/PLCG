#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)103;
unsigned int var_1 = 3530732634U;
signed char var_4 = (signed char)54;
signed char var_5 = (signed char)-117;
long long int var_6 = 4090757534298211974LL;
unsigned int var_7 = 2580106867U;
signed char var_10 = (signed char)102;
int zero = 0;
int var_11 = 2044199786;
long long int var_12 = 2255875940985213794LL;
unsigned long long int var_13 = 4935506507738610940ULL;
_Bool var_14 = (_Bool)0;
signed char var_15 = (signed char)-95;
unsigned long long int arr_2 [20] [20] [20] ;
signed char arr_3 [20] [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = 911062084935875132ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_3 [i_0] [i_1] = (signed char)-32;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
