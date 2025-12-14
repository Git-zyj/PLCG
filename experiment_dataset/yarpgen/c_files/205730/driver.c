#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)249;
signed char var_2 = (signed char)-87;
unsigned long long int var_4 = 17716358954527033169ULL;
signed char var_5 = (signed char)68;
unsigned short var_8 = (unsigned short)53776;
_Bool var_10 = (_Bool)1;
unsigned long long int var_11 = 1028430339647705913ULL;
int var_13 = -1917953174;
int zero = 0;
int var_14 = -1346613764;
unsigned char var_15 = (unsigned char)43;
int var_16 = 24263112;
unsigned short var_17 = (unsigned short)57528;
unsigned int var_18 = 2426583640U;
_Bool arr_0 [24] ;
int arr_3 [24] [24] [24] ;
unsigned long long int arr_4 [24] [24] [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_0 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = 986828667;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = 13339019912931093008ULL;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
