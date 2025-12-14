#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)37322;
int var_2 = 1895511467;
short var_4 = (short)-12155;
int var_6 = 1189950844;
unsigned short var_7 = (unsigned short)30264;
unsigned int var_10 = 4062392447U;
int var_14 = 1968721357;
unsigned long long int var_16 = 9021240130957917976ULL;
int zero = 0;
unsigned short var_17 = (unsigned short)15395;
unsigned short var_18 = (unsigned short)22989;
int var_19 = -701488064;
unsigned short var_20 = (unsigned short)62777;
_Bool var_21 = (_Bool)1;
unsigned long long int arr_0 [25] ;
int arr_2 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_0 [i_0] = 16053567142173858042ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_2 [i_0] = -1231466532;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
