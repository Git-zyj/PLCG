#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-73;
unsigned int var_3 = 3326612238U;
long long int var_4 = -3090882243123448476LL;
signed char var_5 = (signed char)21;
unsigned short var_7 = (unsigned short)38140;
long long int var_8 = 4605206695698044787LL;
signed char var_9 = (signed char)-1;
long long int var_10 = 6802128114183580577LL;
long long int var_11 = 4019990173147536384LL;
int zero = 0;
unsigned short var_12 = (unsigned short)37152;
unsigned short var_13 = (unsigned short)60686;
unsigned int var_14 = 1057261882U;
signed char var_15 = (signed char)66;
_Bool var_16 = (_Bool)1;
long long int arr_1 [22] [22] ;
long long int arr_2 [22] ;
unsigned long long int arr_3 [22] [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_1 [i_0] [i_1] = -54434167836509972LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? -7394641407248652346LL : 8950226488786150920LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_3 [i_0] [i_1] = (i_1 % 2 == 0) ? 10829438678763787282ULL : 2120958123592601966ULL;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
