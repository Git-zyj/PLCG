#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_7 = (unsigned char)109;
long long int var_9 = 8900981035425537002LL;
unsigned char var_11 = (unsigned char)125;
_Bool var_13 = (_Bool)1;
short var_14 = (short)-2248;
long long int var_15 = 1934477714324860516LL;
int zero = 0;
unsigned short var_18 = (unsigned short)62495;
unsigned int var_19 = 3497608612U;
int var_20 = -1150702661;
_Bool var_21 = (_Bool)0;
int arr_3 [17] ;
long long int arr_5 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_3 [i_0] = -421923625;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_5 [i_0] = 7562207758740710471LL;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
