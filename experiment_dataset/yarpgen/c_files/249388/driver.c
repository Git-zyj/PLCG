#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
signed char var_2 = (signed char)117;
int var_4 = 772777490;
unsigned long long int var_5 = 11549100898012993468ULL;
short var_6 = (short)20122;
unsigned long long int var_8 = 15937360691041744158ULL;
int zero = 0;
unsigned char var_12 = (unsigned char)11;
unsigned char var_13 = (unsigned char)15;
unsigned int var_14 = 2616946738U;
int var_15 = -1031994335;
_Bool var_16 = (_Bool)1;
unsigned short var_17 = (unsigned short)25236;
signed char var_18 = (signed char)13;
unsigned long long int arr_0 [15] ;
unsigned long long int arr_4 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_0 [i_0] = 17962557682850805017ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_4 [i_0] = 30718727534448487ULL;
}

void checksum() {
    hash(&seed, var_12);
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
