#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 16775659438165908285ULL;
long long int var_4 = -337342335068768765LL;
signed char var_5 = (signed char)23;
long long int var_6 = -2460232296051287226LL;
unsigned int var_7 = 2133770207U;
_Bool var_9 = (_Bool)1;
int zero = 0;
unsigned char var_14 = (unsigned char)240;
long long int var_15 = -3264611573068910373LL;
unsigned long long int var_16 = 2051137873331964050ULL;
signed char var_17 = (signed char)-116;
unsigned long long int var_18 = 4408116534388177524ULL;
long long int arr_0 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_0 [i_0] = 4599141870118383213LL;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
