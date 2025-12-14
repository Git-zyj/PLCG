#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
long long int var_3 = -1457766583243455819LL;
unsigned long long int var_4 = 16716069588586257625ULL;
unsigned short var_12 = (unsigned short)52084;
long long int var_15 = 7043694356070485276LL;
int zero = 0;
signed char var_18 = (signed char)-25;
short var_19 = (short)-28755;
int var_20 = 262972277;
unsigned long long int var_21 = 3642695654346610165ULL;
unsigned int arr_0 [16] ;
unsigned short arr_1 [16] [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_0 [i_0] = 2907096623U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned short)25948;
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
