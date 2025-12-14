#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1251167383;
signed char var_1 = (signed char)17;
_Bool var_4 = (_Bool)0;
int var_5 = 1505483066;
_Bool var_6 = (_Bool)0;
int var_9 = 1479505966;
_Bool var_13 = (_Bool)1;
signed char var_14 = (signed char)76;
int zero = 0;
unsigned short var_16 = (unsigned short)40231;
_Bool var_17 = (_Bool)1;
int var_18 = -1909454375;
unsigned long long int var_19 = 4065869289733928686ULL;
signed char var_20 = (signed char)-88;
long long int var_21 = 6653001950638816882LL;
unsigned int var_22 = 1715463061U;
unsigned long long int arr_0 [21] ;
int arr_2 [17] ;
signed char arr_3 [17] ;
unsigned short arr_4 [17] ;
signed char arr_6 [17] [17] [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_0 [i_0] = 7485412461310723309ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_2 [i_0] = 658998083;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? (signed char)80 : (signed char)106;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_4 [i_0] = (unsigned short)16017;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (signed char)120 : (signed char)-4;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
