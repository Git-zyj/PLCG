#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 2317813455389708835ULL;
_Bool var_6 = (_Bool)0;
unsigned int var_9 = 3002623023U;
int var_13 = -336723795;
int zero = 0;
signed char var_18 = (signed char)-89;
int var_19 = 283386979;
int var_20 = -1913242359;
unsigned int var_21 = 661399984U;
_Bool var_22 = (_Bool)0;
long long int arr_0 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_0 [i_0] = 7085116428312926876LL;
}

void checksum() {
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
