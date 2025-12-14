#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 2167219050U;
unsigned short var_4 = (unsigned short)42460;
short var_5 = (short)-31558;
unsigned long long int var_7 = 11532862907132769814ULL;
unsigned long long int var_9 = 13566072565273546059ULL;
unsigned int var_10 = 1078787050U;
unsigned int var_11 = 3851045384U;
unsigned int var_13 = 285088031U;
int zero = 0;
unsigned short var_14 = (unsigned short)60959;
unsigned int var_15 = 1561014155U;
unsigned short var_16 = (unsigned short)61383;
unsigned int var_17 = 3990334004U;
unsigned char var_18 = (unsigned char)34;
long long int var_19 = -676627516183274949LL;
unsigned char var_20 = (unsigned char)130;
int arr_0 [18] [18] ;
unsigned short arr_3 [18] [18] [18] ;
unsigned char arr_4 [18] [18] [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_0 [i_0] [i_1] = 784335021;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (unsigned short)32506;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (unsigned char)226;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
