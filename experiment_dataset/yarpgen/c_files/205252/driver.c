#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -864359532201791805LL;
unsigned short var_1 = (unsigned short)35357;
signed char var_2 = (signed char)-102;
long long int var_3 = -672916282081389634LL;
unsigned char var_5 = (unsigned char)169;
signed char var_6 = (signed char)-49;
int var_8 = 1079080087;
unsigned short var_9 = (unsigned short)10928;
unsigned int var_11 = 742806987U;
unsigned int var_13 = 2905055529U;
int var_15 = -798629198;
int var_19 = 1010818505;
int zero = 0;
unsigned int var_20 = 563899757U;
unsigned long long int var_21 = 6675145730259317948ULL;
long long int var_22 = 5721499951618118726LL;
unsigned short var_23 = (unsigned short)54349;
int arr_0 [25] [25] ;
unsigned short arr_2 [25] [25] [25] ;
int arr_3 [25] [25] [25] ;
unsigned long long int arr_6 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_0 [i_0] [i_1] = -1325666208;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = (unsigned short)56189;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = -1786930362;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_6 [i_0] = 1720149587620816072ULL;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
