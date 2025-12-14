#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 534329613702802192LL;
unsigned long long int var_2 = 4415204362060737961ULL;
long long int var_3 = 816243117769298047LL;
unsigned short var_4 = (unsigned short)11296;
signed char var_8 = (signed char)-117;
long long int var_9 = 2144522713249547615LL;
signed char var_10 = (signed char)47;
_Bool var_11 = (_Bool)1;
unsigned int var_12 = 2600774447U;
int var_14 = 2028410723;
_Bool var_17 = (_Bool)0;
short var_19 = (short)-26511;
int zero = 0;
unsigned int var_20 = 1653506674U;
_Bool var_21 = (_Bool)0;
signed char var_22 = (signed char)-98;
unsigned short var_23 = (unsigned short)4048;
unsigned long long int arr_0 [20] ;
unsigned long long int arr_1 [20] ;
signed char arr_2 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_0 [i_0] = 6440278753403381262ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_1 [i_0] = 2337511866422684389ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_2 [i_0] = (signed char)-51;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
