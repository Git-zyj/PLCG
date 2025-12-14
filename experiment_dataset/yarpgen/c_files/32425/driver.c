#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)210;
long long int var_5 = 5153215154561552486LL;
short var_8 = (short)2167;
unsigned short var_10 = (unsigned short)8353;
long long int var_11 = -9134126765450712381LL;
_Bool var_12 = (_Bool)0;
int zero = 0;
long long int var_13 = -923082187896500205LL;
unsigned int var_14 = 2129446520U;
signed char var_15 = (signed char)-35;
unsigned long long int var_16 = 1491905827068345520ULL;
int arr_5 [20] ;
unsigned char arr_6 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_5 [i_0] = 971906477;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_6 [i_0] = (unsigned char)167;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
