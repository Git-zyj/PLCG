#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 844951729;
signed char var_5 = (signed char)-34;
unsigned short var_6 = (unsigned short)16556;
unsigned short var_9 = (unsigned short)16348;
unsigned int var_10 = 2218521467U;
short var_11 = (short)17857;
int zero = 0;
unsigned short var_12 = (unsigned short)29456;
unsigned int var_13 = 1101245092U;
unsigned char var_14 = (unsigned char)108;
int var_15 = -598354592;
long long int var_16 = 5907840291510088112LL;
unsigned short arr_1 [18] [18] ;
_Bool arr_2 [18] [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned short)59521;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_2 [i_0] [i_1] = (_Bool)1;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
