#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
short var_1 = (short)4717;
short var_2 = (short)-25573;
short var_3 = (short)19712;
long long int var_4 = -5321021598490105664LL;
unsigned char var_7 = (unsigned char)4;
short var_8 = (short)15285;
short var_9 = (short)-10511;
unsigned int var_12 = 4254334850U;
long long int var_13 = 3669754616918595282LL;
unsigned char var_14 = (unsigned char)229;
_Bool var_15 = (_Bool)1;
int zero = 0;
int var_16 = -1397409543;
_Bool var_17 = (_Bool)0;
long long int var_18 = 3494362317651389595LL;
unsigned long long int var_19 = 17982670270973045888ULL;
short var_20 = (short)4996;
_Bool var_21 = (_Bool)1;
short var_22 = (short)7341;
unsigned int var_23 = 2339839949U;
_Bool arr_0 [14] ;
_Bool arr_1 [14] ;
signed char arr_2 [14] [14] ;
int arr_3 [14] [14] [14] ;
unsigned long long int arr_4 [14] ;
long long int arr_5 [14] ;
int arr_8 [14] [14] [14] [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_0 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_1 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_2 [i_0] [i_1] = (signed char)39;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = -1525350935;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_4 [i_0] = 10288018014825636792ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_5 [i_0] = 4054812213580509950LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    arr_8 [i_0] [i_1] [i_2] [i_3] = -1983247154;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
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
