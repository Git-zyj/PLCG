#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
signed char var_1 = (signed char)92;
signed char var_2 = (signed char)-76;
unsigned int var_4 = 1041055975U;
_Bool var_5 = (_Bool)1;
unsigned int var_6 = 3117355768U;
int zero = 0;
unsigned int var_11 = 3034261514U;
signed char var_12 = (signed char)68;
short var_13 = (short)15434;
unsigned char var_14 = (unsigned char)216;
short var_15 = (short)29740;
unsigned int arr_0 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_0 [i_0] = 3700918895U;
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
