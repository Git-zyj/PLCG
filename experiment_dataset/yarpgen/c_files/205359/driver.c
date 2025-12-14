#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_4 = (signed char)-53;
int var_5 = -1438289662;
_Bool var_7 = (_Bool)0;
long long int var_9 = -4359617841985278049LL;
unsigned short var_12 = (unsigned short)29415;
int var_14 = 1743010355;
int zero = 0;
unsigned int var_15 = 1360200444U;
signed char var_16 = (signed char)-94;
unsigned long long int var_17 = 13045084330086768062ULL;
long long int arr_2 [21] ;
signed char arr_3 [21] ;
int arr_5 [21] ;
long long int arr_6 [21] [21] [21] [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_2 [i_0] = 8987926418885800727LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_3 [i_0] = (signed char)67;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_5 [i_0] = -312654707;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    arr_6 [i_0] [i_1] [i_2] [i_3] = 2762426593165986492LL;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    hash(&seed, arr_6 [i_0] [i_1] [i_2] [i_3] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
