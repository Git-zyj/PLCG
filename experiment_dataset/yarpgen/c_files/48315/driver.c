#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)159;
unsigned long long int var_1 = 14854124975115596668ULL;
unsigned int var_2 = 2333028313U;
_Bool var_4 = (_Bool)1;
int var_7 = 902286399;
long long int var_15 = -447705429949588486LL;
unsigned char var_16 = (unsigned char)209;
unsigned short var_18 = (unsigned short)9624;
int zero = 0;
unsigned int var_19 = 3443950782U;
unsigned short var_20 = (unsigned short)47917;
unsigned int var_21 = 2752534449U;
unsigned char var_22 = (unsigned char)246;
unsigned char var_23 = (unsigned char)241;
short var_24 = (short)23276;
unsigned char var_25 = (unsigned char)231;
signed char arr_0 [20] [20] ;
_Bool arr_3 [20] ;
unsigned char arr_5 [20] [20] [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_0 [i_0] [i_1] = (signed char)-73;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_3 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (unsigned char)177;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
