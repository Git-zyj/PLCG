#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)41;
long long int var_13 = 4333738646208326690LL;
_Bool var_14 = (_Bool)0;
signed char var_15 = (signed char)38;
unsigned long long int var_16 = 16169537296016727374ULL;
_Bool var_17 = (_Bool)1;
signed char var_19 = (signed char)-39;
int zero = 0;
long long int var_20 = -8854086531226950230LL;
short var_21 = (short)9910;
_Bool var_22 = (_Bool)1;
unsigned long long int var_23 = 3646518110498297007ULL;
long long int arr_0 [21] ;
int arr_1 [21] ;
unsigned char arr_4 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_0 [i_0] = 5772743743181644819LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_1 [i_0] = -861247926;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_4 [i_0] = (unsigned char)194;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
