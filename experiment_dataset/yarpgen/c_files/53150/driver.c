#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_4 = (_Bool)0;
long long int var_5 = -6085712190593273106LL;
long long int var_9 = 1920855232248429195LL;
int zero = 0;
unsigned int var_15 = 11061191U;
signed char var_16 = (signed char)74;
long long int var_17 = -1018910112303072159LL;
long long int var_18 = 1370588968862649242LL;
unsigned long long int var_19 = 10134348318763243189ULL;
unsigned long long int arr_2 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_2 [i_0] = 13504989420137061336ULL;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
