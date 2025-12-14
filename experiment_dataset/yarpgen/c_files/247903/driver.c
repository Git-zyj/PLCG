#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_8 = -1483394074;
int var_15 = 613332857;
unsigned short var_18 = (unsigned short)61987;
unsigned char var_19 = (unsigned char)108;
int zero = 0;
_Bool var_20 = (_Bool)0;
signed char var_21 = (signed char)38;
_Bool var_22 = (_Bool)1;
unsigned short var_23 = (unsigned short)10061;
_Bool var_24 = (_Bool)0;
long long int arr_4 [20] [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_4 [i_0] [i_1] = 5906277388909009294LL;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
