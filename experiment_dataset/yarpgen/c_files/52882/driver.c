#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-20115;
unsigned int var_4 = 3856646587U;
_Bool var_6 = (_Bool)1;
long long int var_10 = -3063867003696089663LL;
unsigned short var_11 = (unsigned short)9163;
short var_13 = (short)-4196;
short var_15 = (short)32621;
unsigned char var_18 = (unsigned char)163;
int zero = 0;
int var_19 = -1855352101;
long long int var_20 = 7574550366029568388LL;
signed char var_21 = (signed char)71;
short var_22 = (short)23879;
_Bool var_23 = (_Bool)1;
unsigned char var_24 = (unsigned char)211;
unsigned char var_25 = (unsigned char)109;
int var_26 = 28749747;
_Bool arr_0 [25] ;
_Bool arr_1 [25] [25] ;
unsigned char arr_3 [25] [25] [25] ;
unsigned int arr_4 [25] ;
short arr_7 [25] [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_0 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_1 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (unsigned char)223;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_4 [i_0] = 4211816114U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_7 [i_0] [i_1] = (short)-13898;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
