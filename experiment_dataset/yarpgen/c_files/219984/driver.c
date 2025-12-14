#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1571773322U;
unsigned int var_5 = 3680924548U;
signed char var_6 = (signed char)-3;
unsigned int var_7 = 2644758122U;
unsigned int var_8 = 3719805220U;
unsigned int var_9 = 3627124070U;
unsigned char var_10 = (unsigned char)39;
short var_13 = (short)-29543;
int zero = 0;
short var_14 = (short)10162;
unsigned char var_15 = (unsigned char)142;
unsigned int var_16 = 2373014757U;
unsigned int arr_2 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_2 [i_0] = 2429185670U;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
