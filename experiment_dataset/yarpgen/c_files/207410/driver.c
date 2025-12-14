#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 516484097U;
unsigned long long int var_5 = 13093537315519266744ULL;
unsigned short var_13 = (unsigned short)37663;
unsigned long long int var_16 = 2575024975223902886ULL;
int zero = 0;
unsigned short var_20 = (unsigned short)24664;
signed char var_21 = (signed char)116;
long long int var_22 = -7920937311795904459LL;
signed char var_23 = (signed char)69;
unsigned long long int var_24 = 10568346318488075530ULL;
_Bool var_25 = (_Bool)0;
long long int arr_0 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_0 [i_0] = -647367573432136493LL;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
