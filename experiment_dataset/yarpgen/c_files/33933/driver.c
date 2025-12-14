#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 5397892788607842744LL;
_Bool var_2 = (_Bool)0;
long long int var_3 = -7236217758712882738LL;
int var_5 = -1299778517;
int var_6 = 517673572;
unsigned long long int var_7 = 8184273999523588666ULL;
long long int var_9 = 6518932486351703158LL;
unsigned int var_12 = 2796344996U;
int zero = 0;
_Bool var_14 = (_Bool)1;
unsigned int var_15 = 878985394U;
_Bool var_16 = (_Bool)1;
_Bool var_17 = (_Bool)1;
int var_18 = -705986974;
int var_19 = -1400550502;
long long int var_20 = -3363682921970126517LL;
unsigned short var_21 = (unsigned short)5355;
short arr_2 [23] [23] [23] ;
unsigned long long int arr_7 [23] [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = (short)-13707;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_7 [i_0] [i_1] = 12951185835979020492ULL;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
