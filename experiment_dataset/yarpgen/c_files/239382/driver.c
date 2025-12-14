#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 8812083276929570037ULL;
long long int var_1 = 3846516308646780484LL;
unsigned short var_2 = (unsigned short)62536;
signed char var_3 = (signed char)-90;
_Bool var_4 = (_Bool)0;
long long int var_5 = 2623562709511071309LL;
signed char var_6 = (signed char)45;
int var_9 = -2064533977;
int zero = 0;
int var_12 = -1611266951;
signed char var_13 = (signed char)1;
int var_14 = 586636713;
unsigned int var_15 = 2485087540U;
unsigned int var_16 = 2141569934U;
unsigned int arr_0 [24] [24] ;
signed char arr_1 [24] ;
long long int arr_2 [24] [24] [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_0 [i_0] [i_1] = 1606493945U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_1 [i_0] = (signed char)-52;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = -2939890826109431210LL;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
