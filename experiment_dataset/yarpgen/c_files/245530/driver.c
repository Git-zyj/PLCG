#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_5 = -3752196947440946021LL;
long long int var_6 = 3591479002890424301LL;
unsigned char var_8 = (unsigned char)251;
long long int var_12 = 8243655165621843583LL;
int zero = 0;
long long int var_13 = -6887520131048773672LL;
long long int var_14 = -4731591696001720791LL;
long long int var_15 = 7039483489827195628LL;
long long int var_16 = 8059620870173579664LL;
unsigned char var_17 = (unsigned char)12;
short var_18 = (short)-17230;
long long int arr_0 [25] ;
short arr_2 [25] ;
long long int arr_4 [25] [25] [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_0 [i_0] = 8297780975067323403LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_2 [i_0] = (short)13488;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = -10663935624819891LL;
}

void checksum() {
    hash(&seed, var_13);
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
