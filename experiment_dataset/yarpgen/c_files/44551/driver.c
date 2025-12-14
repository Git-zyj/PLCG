#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-13335;
short var_1 = (short)-26519;
long long int var_2 = -2831784873786621813LL;
signed char var_4 = (signed char)-109;
unsigned int var_6 = 887805711U;
int var_7 = -894704883;
int var_9 = -1433899363;
short var_10 = (short)32506;
long long int var_11 = 8767232781698403970LL;
int var_15 = -133260222;
int zero = 0;
long long int var_18 = 5244938103797824250LL;
int var_19 = -181348043;
int var_20 = 1946931650;
unsigned char arr_0 [22] ;
int arr_1 [22] [22] ;
int arr_2 [22] [22] ;
int arr_3 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_0 [i_0] = (unsigned char)39;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_1 [i_0] [i_1] = 421811897;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_2 [i_0] [i_1] = 2098301860;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_3 [i_0] = 1883517942;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
