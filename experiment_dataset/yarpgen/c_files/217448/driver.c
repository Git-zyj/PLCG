#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)14575;
unsigned short var_1 = (unsigned short)57813;
unsigned long long int var_3 = 6107286795882720654ULL;
int var_5 = -2097118909;
unsigned int var_6 = 3326683891U;
unsigned int var_7 = 2662754876U;
unsigned long long int var_9 = 3532278665836489749ULL;
unsigned short var_10 = (unsigned short)17103;
int zero = 0;
unsigned long long int var_11 = 2192309652796301406ULL;
int var_12 = -600557630;
unsigned long long int var_13 = 15794399571043649535ULL;
signed char var_14 = (signed char)95;
_Bool var_15 = (_Bool)1;
int arr_0 [10] ;
short arr_2 [10] [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_0 [i_0] = -1147433334;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_2 [i_0] [i_1] = (short)-23065;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
