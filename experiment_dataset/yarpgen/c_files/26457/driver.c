#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)717;
long long int var_4 = -3723428928202393206LL;
unsigned char var_6 = (unsigned char)165;
long long int var_9 = 8105825587548564917LL;
unsigned char var_11 = (unsigned char)31;
long long int var_12 = -6732212184997429214LL;
long long int var_15 = -1640200861649279516LL;
int zero = 0;
short var_18 = (short)-2090;
unsigned short var_19 = (unsigned short)12718;
long long int var_20 = -6947750556959234415LL;
long long int var_21 = -3048571218586670356LL;
unsigned short var_22 = (unsigned short)10514;
short var_23 = (short)-2911;
unsigned short arr_0 [25] [25] ;
short arr_2 [25] ;
long long int arr_3 [25] [25] ;
long long int arr_4 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned short)52555;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_2 [i_0] = (short)-19983;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_3 [i_0] [i_1] = -5419946096453410479LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_4 [i_0] = 6874110277639641005LL;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
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
