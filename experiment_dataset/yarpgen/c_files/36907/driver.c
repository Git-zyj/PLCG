#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -817790153;
signed char var_1 = (signed char)36;
signed char var_9 = (signed char)63;
unsigned long long int var_12 = 13671580895095699381ULL;
_Bool var_13 = (_Bool)1;
_Bool var_14 = (_Bool)1;
unsigned int var_15 = 3799079798U;
int var_16 = 117604871;
int zero = 0;
unsigned long long int var_18 = 13449045022799796995ULL;
signed char var_19 = (signed char)0;
long long int var_20 = -4598303426435850084LL;
unsigned int var_21 = 765010474U;
long long int arr_0 [10] [10] ;
unsigned int arr_1 [10] ;
signed char arr_2 [10] ;
_Bool arr_3 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_0 [i_0] [i_1] = 3875278199326484978LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_1 [i_0] = 3638415357U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? (signed char)-60 : (signed char)17;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)1;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
