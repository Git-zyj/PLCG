#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -5541942731463057131LL;
_Bool var_3 = (_Bool)0;
_Bool var_4 = (_Bool)1;
signed char var_8 = (signed char)-4;
long long int var_9 = 8201277697225638275LL;
signed char var_11 = (signed char)48;
short var_12 = (short)-1563;
unsigned long long int var_14 = 5192928579929420524ULL;
int zero = 0;
_Bool var_16 = (_Bool)0;
unsigned long long int var_17 = 2767990476717076220ULL;
unsigned int var_18 = 723438210U;
long long int var_19 = -5153951111609718109LL;
int var_20 = 1489856624;
unsigned short arr_0 [20] ;
signed char arr_1 [20] ;
signed char arr_2 [20] ;
unsigned long long int arr_3 [20] ;
signed char arr_4 [20] ;
int arr_5 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_0 [i_0] = (unsigned short)27259;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_1 [i_0] = (signed char)-10;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? (signed char)-23 : (signed char)39;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? 8472273394897864998ULL : 16963710772030701546ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? (signed char)106 : (signed char)85;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? -116945769 : -336107947;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
