#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2616200095U;
unsigned long long int var_4 = 15225861660196245950ULL;
short var_5 = (short)25619;
unsigned long long int var_15 = 5554144415022464751ULL;
signed char var_19 = (signed char)50;
int zero = 0;
short var_20 = (short)12993;
short var_21 = (short)-19816;
unsigned char var_22 = (unsigned char)166;
short var_23 = (short)-4723;
unsigned long long int var_24 = 18409874238669532860ULL;
unsigned int var_25 = 112613102U;
unsigned long long int arr_3 [12] ;
signed char arr_4 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_3 [i_0] = 13553421053574781805ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? (signed char)53 : (signed char)119;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
