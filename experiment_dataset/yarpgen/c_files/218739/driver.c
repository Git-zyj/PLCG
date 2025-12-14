#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)-30252;
unsigned char var_5 = (unsigned char)78;
unsigned long long int var_6 = 5186504962518483849ULL;
short var_9 = (short)24540;
short var_11 = (short)-9461;
unsigned long long int var_18 = 2889397831910023525ULL;
int zero = 0;
long long int var_19 = -855346928458219100LL;
_Bool var_20 = (_Bool)1;
unsigned int var_21 = 4151001030U;
unsigned long long int var_22 = 4595738885046167618ULL;
unsigned int arr_4 [10] [10] ;
unsigned short arr_5 [10] ;
short arr_6 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_4 [i_0] [i_1] = 4022375794U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? (unsigned short)58945 : (unsigned short)47106;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? (short)-21953 : (short)16535;
}

void checksum() {
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
