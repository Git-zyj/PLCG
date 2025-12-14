#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 8973532589278639559LL;
long long int var_3 = -5499967118341988597LL;
int var_6 = 2115721522;
unsigned int var_11 = 2753293318U;
_Bool var_14 = (_Bool)1;
signed char var_15 = (signed char)-77;
short var_16 = (short)19241;
int zero = 0;
long long int var_17 = 3708330809153460266LL;
unsigned char var_18 = (unsigned char)70;
unsigned int var_19 = 3786725015U;
unsigned char var_20 = (unsigned char)182;
long long int arr_0 [10] ;
short arr_1 [10] [10] ;
short arr_3 [10] [10] [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_0 [i_0] = 3352503785140114583LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_1 [i_0] [i_1] = (short)23320;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (short)4717;
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
