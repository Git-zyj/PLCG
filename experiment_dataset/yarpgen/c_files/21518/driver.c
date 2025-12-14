#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)18835;
unsigned long long int var_1 = 4154023536999448128ULL;
unsigned short var_2 = (unsigned short)61756;
signed char var_3 = (signed char)-39;
unsigned int var_6 = 1373072578U;
short var_7 = (short)-7480;
_Bool var_10 = (_Bool)1;
unsigned long long int var_11 = 2431165469610879501ULL;
int zero = 0;
unsigned short var_16 = (unsigned short)36958;
unsigned int var_17 = 2218326604U;
_Bool var_18 = (_Bool)0;
unsigned long long int arr_2 [12] ;
unsigned long long int arr_4 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_2 [i_0] = 17794860363952522720ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? 7835789089692823890ULL : 16792895049939244614ULL;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
