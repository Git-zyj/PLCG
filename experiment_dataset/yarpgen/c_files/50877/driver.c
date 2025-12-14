#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_6 = -5901574160241196382LL;
unsigned char var_8 = (unsigned char)80;
long long int var_16 = -4849628571219024272LL;
unsigned char var_18 = (unsigned char)223;
int zero = 0;
int var_20 = 343344765;
long long int var_21 = 6231265487300505378LL;
unsigned short var_22 = (unsigned short)64551;
long long int var_23 = 7906345799938322620LL;
unsigned short var_24 = (unsigned short)8628;
long long int var_25 = -6217209749571632761LL;
unsigned char var_26 = (unsigned char)75;
int var_27 = -1609318248;
int arr_0 [21] [21] ;
int arr_1 [21] [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_0 [i_0] [i_1] = 1360168868;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_1 [i_0] [i_1] = 765654615;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
