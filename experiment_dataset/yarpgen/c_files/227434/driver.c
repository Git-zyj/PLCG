#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
_Bool var_5 = (_Bool)1;
signed char var_15 = (signed char)59;
unsigned long long int var_16 = 2263813252229935430ULL;
int zero = 0;
_Bool var_19 = (_Bool)1;
short var_20 = (short)5193;
unsigned short var_21 = (unsigned short)65382;
unsigned char var_22 = (unsigned char)203;
int var_23 = -1845128274;
_Bool var_24 = (_Bool)0;
signed char var_25 = (signed char)-5;
_Bool var_26 = (_Bool)1;
unsigned long long int var_27 = 15745896840731366163ULL;
unsigned long long int arr_1 [16] ;
unsigned char arr_2 [16] [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_1 [i_0] = 11224309741914184824ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_2 [i_0] [i_1] = (unsigned char)244;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
