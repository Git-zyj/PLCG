#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1451866609;
unsigned short var_1 = (unsigned short)47020;
signed char var_2 = (signed char)-7;
unsigned int var_3 = 876774714U;
unsigned long long int var_4 = 4480409524335019549ULL;
unsigned long long int var_5 = 812074221634172189ULL;
_Bool var_7 = (_Bool)0;
short var_9 = (short)5532;
unsigned short var_10 = (unsigned short)50694;
unsigned short var_11 = (unsigned short)54483;
unsigned char var_12 = (unsigned char)164;
int zero = 0;
_Bool var_15 = (_Bool)1;
_Bool var_16 = (_Bool)1;
signed char arr_5 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_5 [i_0] = (signed char)116;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
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
