#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_4 = (signed char)-81;
_Bool var_8 = (_Bool)1;
long long int var_10 = -5865150477551929573LL;
int var_13 = -1498712494;
_Bool var_15 = (_Bool)0;
unsigned int var_17 = 1091535055U;
int zero = 0;
_Bool var_18 = (_Bool)1;
short var_19 = (short)-19484;
signed char var_20 = (signed char)-71;
int var_21 = -1310040489;
unsigned int var_22 = 1496408551U;
int var_23 = 118034497;
unsigned int var_24 = 2868163998U;
unsigned short var_25 = (unsigned short)43222;
unsigned char arr_1 [12] ;
long long int arr_2 [12] [12] ;
signed char arr_3 [10] [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_1 [i_0] = (unsigned char)123;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_2 [i_0] [i_1] = 1938008942349390396LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_3 [i_0] [i_1] = (signed char)-13;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
