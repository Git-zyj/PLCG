#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)57511;
unsigned char var_1 = (unsigned char)207;
unsigned short var_4 = (unsigned short)50914;
unsigned long long int var_6 = 3135446287747104379ULL;
unsigned short var_8 = (unsigned short)30609;
unsigned char var_9 = (unsigned char)91;
long long int var_10 = -7101324467850315484LL;
unsigned char var_11 = (unsigned char)55;
_Bool var_12 = (_Bool)1;
long long int var_14 = -2972569875611827809LL;
int zero = 0;
unsigned long long int var_15 = 120139143956598157ULL;
int var_16 = -164330618;
unsigned short var_17 = (unsigned short)2790;
unsigned short var_18 = (unsigned short)47745;
unsigned int var_19 = 2779410130U;
unsigned char var_20 = (unsigned char)135;
unsigned short var_21 = (unsigned short)32470;
unsigned long long int arr_0 [15] ;
signed char arr_2 [22] [22] ;
unsigned long long int arr_4 [22] [22] [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? 12310024121626837362ULL : 7477469721675315862ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_2 [i_0] [i_1] = (signed char)-118;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = 9022601759462461298ULL;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
