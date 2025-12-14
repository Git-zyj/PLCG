#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 17075820155612603709ULL;
unsigned char var_2 = (unsigned char)126;
_Bool var_3 = (_Bool)0;
unsigned int var_4 = 2823294587U;
_Bool var_5 = (_Bool)1;
unsigned int var_6 = 3848117578U;
unsigned int var_10 = 1779040567U;
unsigned int var_11 = 457433994U;
unsigned int var_13 = 548840508U;
unsigned long long int var_15 = 111249663434547784ULL;
long long int var_16 = 6231497474953069483LL;
int zero = 0;
signed char var_17 = (signed char)5;
unsigned int var_18 = 3975685899U;
long long int var_19 = 7688842264929439533LL;
long long int var_20 = 728877670131634378LL;
int var_21 = -526947119;
_Bool arr_0 [10] ;
unsigned char arr_1 [10] [10] ;
signed char arr_2 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_0 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned char)162;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? (signed char)100 : (signed char)-37;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
