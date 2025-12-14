#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)6;
short var_1 = (short)-6037;
unsigned int var_2 = 1696297325U;
unsigned int var_4 = 2641860722U;
unsigned int var_5 = 2043171109U;
_Bool var_6 = (_Bool)0;
long long int var_7 = -3198695541630575873LL;
long long int var_8 = 1068145123208756827LL;
long long int var_9 = 5481059272332559925LL;
long long int var_11 = 5694509991305328492LL;
unsigned int var_12 = 146366149U;
long long int var_13 = -3938653391866213936LL;
_Bool var_14 = (_Bool)1;
int zero = 0;
signed char var_15 = (signed char)109;
long long int var_16 = 1904861403057850162LL;
unsigned int var_17 = 2971106385U;
_Bool var_18 = (_Bool)0;
long long int var_19 = -313890116576398720LL;
long long int arr_0 [21] ;
short arr_1 [21] [21] ;
unsigned int arr_2 [21] ;
unsigned short arr_4 [21] [21] ;
short arr_5 [21] [21] [21] [21] ;
unsigned short arr_6 [21] [21] [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_0 [i_0] = -8087240226904059349LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_1 [i_0] [i_1] = (short)-4149;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_2 [i_0] = 596254130U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_4 [i_0] [i_1] = (unsigned short)40751;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    arr_5 [i_0] [i_1] [i_2] [i_3] = (short)-26999;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (unsigned short)49296;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
