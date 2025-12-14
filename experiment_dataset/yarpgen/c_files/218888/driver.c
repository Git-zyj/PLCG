#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)20186;
unsigned short var_4 = (unsigned short)64411;
unsigned short var_5 = (unsigned short)62827;
unsigned long long int var_7 = 543367494421369588ULL;
unsigned long long int var_9 = 261011727778858002ULL;
unsigned short var_13 = (unsigned short)30513;
unsigned long long int var_16 = 18420976712015898114ULL;
short var_18 = (short)9908;
int zero = 0;
unsigned long long int var_19 = 11829446516555549370ULL;
long long int var_20 = -3795971177954182203LL;
int var_21 = 1147568923;
short var_22 = (short)25869;
long long int arr_0 [21] ;
unsigned long long int arr_1 [21] [21] ;
_Bool arr_2 [21] ;
unsigned short arr_5 [21] [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_0 [i_0] = 2476299387059259808LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_1 [i_0] [i_1] = 14142862385667539956ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_2 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_5 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned short)58605 : (unsigned short)29190;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
