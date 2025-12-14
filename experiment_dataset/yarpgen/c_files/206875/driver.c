#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)31057;
_Bool var_1 = (_Bool)0;
unsigned long long int var_2 = 16299031024229212454ULL;
unsigned long long int var_5 = 17685633284297252843ULL;
short var_8 = (short)10280;
short var_10 = (short)22797;
long long int var_11 = -5968541053064844330LL;
int zero = 0;
long long int var_19 = 6303582751803277744LL;
unsigned long long int var_20 = 4999172988437601879ULL;
short var_21 = (short)22487;
unsigned int arr_4 [24] [24] [24] ;
short arr_5 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = 1508938813U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_5 [i_0] = (short)288;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
