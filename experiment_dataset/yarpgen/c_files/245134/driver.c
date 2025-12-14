#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-64;
long long int var_2 = -9196815071776367701LL;
long long int var_3 = -4177642663083256501LL;
long long int var_6 = -480061469429882165LL;
int var_8 = -348877145;
short var_9 = (short)-13763;
int var_10 = -980997428;
short var_11 = (short)11533;
short var_12 = (short)-11852;
_Bool var_13 = (_Bool)0;
_Bool var_14 = (_Bool)0;
unsigned short var_15 = (unsigned short)53427;
int var_16 = -1640406250;
int zero = 0;
unsigned char var_17 = (unsigned char)46;
signed char var_18 = (signed char)-19;
long long int var_19 = -745481940219220311LL;
long long int var_20 = 8949589158861857238LL;
unsigned short var_21 = (unsigned short)48605;
unsigned int var_22 = 1509971952U;
long long int var_23 = -7808414721111347023LL;
_Bool var_24 = (_Bool)0;
unsigned int var_25 = 299063779U;
_Bool var_26 = (_Bool)1;
_Bool var_27 = (_Bool)1;
unsigned long long int arr_0 [15] ;
long long int arr_4 [15] ;
unsigned int arr_5 [15] [15] ;
short arr_8 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_0 [i_0] = 6913955489015410037ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_4 [i_0] = -2719326577702856513LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_5 [i_0] [i_1] = 1133230279U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_8 [i_0] = (short)-1201;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
