#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1228558384U;
signed char var_2 = (signed char)71;
unsigned char var_4 = (unsigned char)27;
long long int var_7 = 2750886698407826028LL;
_Bool var_8 = (_Bool)0;
unsigned int var_9 = 3077320174U;
long long int var_11 = 237266261582608566LL;
signed char var_12 = (signed char)2;
signed char var_15 = (signed char)-82;
int zero = 0;
unsigned char var_17 = (unsigned char)177;
unsigned short var_18 = (unsigned short)21577;
unsigned char var_19 = (unsigned char)213;
signed char var_20 = (signed char)-85;
unsigned short arr_0 [20] ;
_Bool arr_1 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_0 [i_0] = (unsigned short)48341;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_1 [i_0] = (_Bool)1;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
