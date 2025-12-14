#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 7499437899464615283LL;
unsigned long long int var_1 = 12629149021697750545ULL;
long long int var_2 = -3527251543711920816LL;
int var_3 = -144219085;
long long int var_4 = 289055372971710653LL;
int var_5 = -1740004454;
short var_6 = (short)-13449;
long long int var_7 = -1811449078596596924LL;
long long int var_8 = -3509227731222505562LL;
_Bool var_9 = (_Bool)1;
short var_10 = (short)23075;
int zero = 0;
signed char var_11 = (signed char)-91;
int var_12 = -1308232324;
unsigned char var_13 = (unsigned char)182;
int var_14 = 1887193786;
short var_15 = (short)-15893;
unsigned char var_16 = (unsigned char)156;
long long int arr_0 [23] [23] ;
unsigned long long int arr_1 [23] ;
short arr_4 [11] ;
int arr_5 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_0 [i_0] [i_1] = 1359546843438909326LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_1 [i_0] = 15336415128923720612ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? (short)-25778 : (short)27834;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? 1953696398 : -1133870909;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
