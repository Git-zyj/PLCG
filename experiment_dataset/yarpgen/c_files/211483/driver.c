#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1723160872;
long long int var_2 = -192831438883239LL;
int var_3 = 879706890;
unsigned short var_5 = (unsigned short)2610;
long long int var_9 = -291814148998661381LL;
int zero = 0;
signed char var_10 = (signed char)-11;
unsigned short var_11 = (unsigned short)25749;
long long int var_12 = 1055346364782242086LL;
long long int var_13 = -8635824053484156651LL;
int var_14 = -1400012335;
unsigned short var_15 = (unsigned short)64061;
signed char arr_0 [17] ;
int arr_1 [17] ;
short arr_2 [17] [17] ;
int arr_3 [17] [17] ;
int arr_5 [17] [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_0 [i_0] = (signed char)75;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_1 [i_0] = -743002278;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_2 [i_0] [i_1] = (short)31399;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_3 [i_0] [i_1] = -553035344;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_5 [i_0] [i_1] = -1922688270;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
