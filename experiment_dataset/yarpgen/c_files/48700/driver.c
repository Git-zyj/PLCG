#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
long long int var_5 = -1013809358995945961LL;
unsigned long long int var_7 = 10066434459400137449ULL;
unsigned int var_8 = 395228358U;
int var_9 = 1010665344;
_Bool var_10 = (_Bool)1;
unsigned long long int var_11 = 11410035008075268712ULL;
unsigned int var_18 = 1634478634U;
int zero = 0;
unsigned short var_19 = (unsigned short)969;
long long int var_20 = -2021673372965811009LL;
_Bool var_21 = (_Bool)1;
unsigned long long int var_22 = 9612973014021119964ULL;
long long int var_23 = 7672260327652766306LL;
unsigned long long int var_24 = 2888694455339001780ULL;
long long int arr_0 [18] ;
signed char arr_1 [18] [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_0 [i_0] = -2626476081095784241LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_1 [i_0] [i_1] = (i_0 % 2 == 0) ? (signed char)62 : (signed char)-39;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
