#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-18931;
short var_1 = (short)22116;
unsigned short var_4 = (unsigned short)54834;
long long int var_5 = -8600964341560044512LL;
unsigned long long int var_6 = 18198412255351752363ULL;
long long int var_7 = 1233574097582667247LL;
unsigned int var_8 = 2540543750U;
unsigned short var_10 = (unsigned short)42938;
int zero = 0;
long long int var_12 = 8675837843207068363LL;
unsigned long long int var_13 = 1587843182607609547ULL;
short var_14 = (short)14540;
int var_15 = 521073999;
unsigned long long int var_16 = 17579941222705461836ULL;
unsigned short var_17 = (unsigned short)60584;
unsigned int arr_0 [14] ;
unsigned long long int arr_1 [14] ;
long long int arr_4 [10] [10] ;
short arr_2 [14] ;
int arr_6 [10] ;
unsigned long long int arr_7 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_0 [i_0] = 3475421649U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_1 [i_0] = 4467462526786245582ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_4 [i_0] [i_1] = -3155821831362623917LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_2 [i_0] = (short)27390;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_6 [i_0] = -1055558208;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_7 [i_0] = 2628335060659825635ULL;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_7 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
