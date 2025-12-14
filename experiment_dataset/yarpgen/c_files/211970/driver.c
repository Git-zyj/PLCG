#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)5553;
signed char var_1 = (signed char)111;
short var_6 = (short)8233;
int var_8 = -1764514951;
int zero = 0;
short var_10 = (short)7703;
unsigned char var_11 = (unsigned char)172;
_Bool var_12 = (_Bool)0;
signed char var_13 = (signed char)101;
unsigned long long int arr_0 [22] ;
long long int arr_2 [22] ;
short arr_3 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_0 [i_0] = 13833000366657734819ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_2 [i_0] = 7683374002745159748LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_3 [i_0] = (short)-1601;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
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
