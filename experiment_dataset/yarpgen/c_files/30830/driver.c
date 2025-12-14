#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1387846790;
unsigned char var_2 = (unsigned char)49;
int var_5 = 1692810210;
unsigned short var_6 = (unsigned short)10705;
int zero = 0;
signed char var_10 = (signed char)-41;
long long int var_11 = -4770528131617746285LL;
unsigned int var_12 = 418705334U;
signed char var_13 = (signed char)-59;
signed char arr_0 [25] ;
unsigned char arr_2 [25] ;
unsigned long long int arr_3 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_0 [i_0] = (signed char)127;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_2 [i_0] = (unsigned char)5;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_3 [i_0] = 5092769509810185595ULL;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
