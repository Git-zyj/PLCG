#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)21945;
_Bool var_2 = (_Bool)1;
int var_3 = 1735671457;
unsigned char var_5 = (unsigned char)62;
unsigned char var_6 = (unsigned char)73;
signed char var_7 = (signed char)-103;
unsigned char var_9 = (unsigned char)210;
int zero = 0;
int var_12 = 1508936835;
unsigned long long int var_13 = 6292308890441803475ULL;
int var_14 = 1590046539;
long long int var_15 = 2991119731283867254LL;
unsigned long long int var_16 = 16791005753680164081ULL;
short var_17 = (short)-7974;
unsigned char var_18 = (unsigned char)18;
int var_19 = -856395436;
int arr_0 [19] ;
unsigned int arr_3 [19] ;
_Bool arr_10 [14] [14] ;
unsigned long long int arr_12 [14] [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_0 [i_0] = 1456664709;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_3 [i_0] = 2099331732U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_10 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_12 [i_0] [i_1] = 3406776461984405806ULL;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            hash(&seed, arr_12 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
