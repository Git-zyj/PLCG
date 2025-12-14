#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)19697;
_Bool var_1 = (_Bool)1;
unsigned short var_2 = (unsigned short)26605;
int var_4 = -1289675609;
_Bool var_5 = (_Bool)0;
unsigned long long int var_6 = 10601051337546128088ULL;
unsigned int var_7 = 3692843832U;
unsigned char var_8 = (unsigned char)58;
_Bool var_9 = (_Bool)0;
int zero = 0;
_Bool var_10 = (_Bool)0;
_Bool var_11 = (_Bool)1;
_Bool var_12 = (_Bool)0;
int var_13 = -1841960079;
long long int var_14 = -8052776315823614817LL;
long long int var_15 = 2245933075074339268LL;
_Bool arr_2 [25] [25] ;
int arr_3 [25] [25] ;
short arr_4 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_2 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_3 [i_0] [i_1] = -1727585221;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_4 [i_0] = (short)19664;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
