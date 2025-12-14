#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)15656;
_Bool var_6 = (_Bool)0;
unsigned long long int var_14 = 12924453454190255689ULL;
int zero = 0;
unsigned long long int var_16 = 14238342069987976106ULL;
_Bool var_17 = (_Bool)0;
int var_18 = 302122460;
_Bool var_19 = (_Bool)1;
unsigned short var_20 = (unsigned short)23990;
unsigned long long int arr_0 [11] [11] ;
signed char arr_1 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_0 [i_0] [i_1] = 15356596330734371911ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_1 [i_0] = (signed char)34;
}

void checksum() {
    hash(&seed, var_16);
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
