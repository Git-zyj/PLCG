#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 12169445450596987518ULL;
signed char var_4 = (signed char)-92;
signed char var_5 = (signed char)127;
signed char var_7 = (signed char)82;
unsigned char var_8 = (unsigned char)5;
unsigned long long int var_9 = 5223408026468972221ULL;
signed char var_10 = (signed char)-41;
unsigned char var_11 = (unsigned char)110;
int zero = 0;
signed char var_12 = (signed char)-100;
long long int var_13 = -779355051409003553LL;
unsigned char var_14 = (unsigned char)47;
unsigned long long int var_15 = 14491936533837967933ULL;
_Bool var_16 = (_Bool)1;
unsigned long long int var_17 = 86467372658387066ULL;
unsigned char arr_0 [17] ;
unsigned long long int arr_1 [17] ;
int arr_5 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_0 [i_0] = (unsigned char)21;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_1 [i_0] = 13397253902361227487ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_5 [i_0] = 39797426;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
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
