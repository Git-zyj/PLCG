#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)100;
_Bool var_6 = (_Bool)1;
unsigned short var_9 = (unsigned short)15980;
signed char var_10 = (signed char)-77;
_Bool var_15 = (_Bool)1;
int zero = 0;
unsigned long long int var_17 = 5943133558309800685ULL;
unsigned char var_18 = (unsigned char)126;
unsigned char var_19 = (unsigned char)223;
int var_20 = -1696537699;
unsigned int var_21 = 404210092U;
signed char var_22 = (signed char)-34;
_Bool var_23 = (_Bool)0;
int arr_0 [16] [16] ;
int arr_1 [16] [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_0 [i_0] [i_1] = 989586680;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_1 [i_0] [i_1] = (i_0 % 2 == 0) ? 1655104809 : -250601357;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
