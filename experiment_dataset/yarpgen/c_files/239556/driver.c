#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
long long int var_7 = 4164023897054309544LL;
int var_9 = -736937854;
_Bool var_12 = (_Bool)1;
short var_13 = (short)-24375;
short var_14 = (short)12807;
_Bool var_17 = (_Bool)1;
int zero = 0;
long long int var_20 = -8933581576864890677LL;
short var_21 = (short)9407;
long long int var_22 = 5200507616700748144LL;
short var_23 = (short)3447;
_Bool var_24 = (_Bool)0;
long long int arr_1 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_1 [i_0] = -6186151671276024882LL;
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
