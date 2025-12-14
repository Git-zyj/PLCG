#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -878429794;
unsigned int var_2 = 3755890439U;
int var_4 = 581539762;
int var_7 = 375746622;
unsigned long long int var_9 = 685324488696192000ULL;
long long int var_11 = 8109109219726719319LL;
signed char var_12 = (signed char)-37;
unsigned char var_17 = (unsigned char)131;
int zero = 0;
short var_18 = (short)-16211;
unsigned long long int var_19 = 18104752039835029260ULL;
int var_20 = 139177086;
unsigned long long int var_21 = 5735341365069667637ULL;
unsigned char var_22 = (unsigned char)94;
unsigned int var_23 = 967802554U;
unsigned int arr_0 [10] ;
int arr_1 [10] ;
unsigned char arr_6 [10] [10] [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_0 [i_0] = 3034421287U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_1 [i_0] = 1063683128;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (unsigned char)57;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                hash(&seed, arr_6 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
