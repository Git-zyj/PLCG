#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)7794;
unsigned short var_4 = (unsigned short)55784;
unsigned short var_7 = (unsigned short)41888;
unsigned long long int var_8 = 9759697792153833111ULL;
int zero = 0;
signed char var_10 = (signed char)-80;
unsigned char var_11 = (unsigned char)225;
unsigned short var_12 = (unsigned short)15696;
unsigned long long int var_13 = 2657499326201416087ULL;
short var_14 = (short)-16340;
_Bool var_15 = (_Bool)1;
short arr_2 [22] ;
unsigned long long int arr_4 [22] [22] ;
unsigned long long int arr_6 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_2 [i_0] = (short)29128;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_4 [i_0] [i_1] = 638444334044731003ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? 10328137720628522943ULL : 2074865436141850918ULL;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
