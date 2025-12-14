#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)9466;
int var_4 = 1066599895;
unsigned int var_8 = 4268584139U;
unsigned char var_10 = (unsigned char)92;
unsigned long long int var_11 = 643788941253981615ULL;
unsigned long long int var_13 = 13319364651204633135ULL;
long long int var_14 = 5317438734165670741LL;
unsigned long long int var_16 = 14499845742174250913ULL;
int zero = 0;
short var_19 = (short)21450;
int var_20 = 1386795601;
signed char var_21 = (signed char)24;
unsigned char var_22 = (unsigned char)69;
unsigned short var_23 = (unsigned short)52383;
unsigned short var_24 = (unsigned short)10684;
unsigned long long int var_25 = 2499377859177487843ULL;
_Bool arr_0 [12] [12] ;
signed char arr_2 [12] ;
long long int arr_4 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_0 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_2 [i_0] = (signed char)-34;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? -8576795496204403815LL : 3562275655053986452LL;
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
