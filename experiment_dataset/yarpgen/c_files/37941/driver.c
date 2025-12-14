#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)199;
_Bool var_3 = (_Bool)0;
signed char var_4 = (signed char)1;
_Bool var_14 = (_Bool)0;
unsigned char var_15 = (unsigned char)46;
int zero = 0;
signed char var_18 = (signed char)-109;
signed char var_19 = (signed char)60;
_Bool var_20 = (_Bool)1;
unsigned short var_21 = (unsigned short)52645;
unsigned int arr_1 [15] [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_1 [i_0] [i_1] = 228574348U;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
