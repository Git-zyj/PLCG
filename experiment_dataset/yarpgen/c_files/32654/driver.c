#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-7025;
_Bool var_3 = (_Bool)1;
long long int var_7 = 946611797155540309LL;
int var_8 = -506383514;
long long int var_9 = 9120246197408500LL;
long long int var_13 = -1641403366859731700LL;
int zero = 0;
_Bool var_17 = (_Bool)1;
long long int var_18 = 3722898757186701463LL;
long long int var_19 = -8511209025166136017LL;
_Bool var_20 = (_Bool)1;
_Bool var_21 = (_Bool)1;
_Bool var_22 = (_Bool)0;
unsigned int arr_3 [22] [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_3 [i_0] [i_1] = 3184312617U;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
