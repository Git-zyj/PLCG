#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1220048126;
unsigned int var_2 = 642669427U;
signed char var_3 = (signed char)50;
long long int var_4 = -4651172970078054761LL;
short var_5 = (short)31927;
int var_7 = 798416280;
_Bool var_8 = (_Bool)1;
unsigned short var_9 = (unsigned short)29833;
int zero = 0;
signed char var_10 = (signed char)21;
unsigned long long int var_11 = 16221754054785336392ULL;
unsigned int var_12 = 1526651695U;
unsigned char var_13 = (unsigned char)118;
unsigned short var_14 = (unsigned short)29324;
short arr_0 [12] ;
unsigned int arr_1 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_0 [i_0] = (short)25387;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_1 [i_0] = 4237625346U;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
