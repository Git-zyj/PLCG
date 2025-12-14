#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3146341171U;
long long int var_3 = 8406004471193380451LL;
unsigned long long int var_8 = 16338631057216938273ULL;
int zero = 0;
unsigned long long int var_12 = 1344848479141488535ULL;
signed char var_13 = (signed char)-118;
_Bool var_14 = (_Bool)1;
unsigned short var_15 = (unsigned short)24578;
long long int var_16 = -5687026545324188797LL;
unsigned long long int var_17 = 8788774726291022956ULL;
_Bool arr_0 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_0 [i_0] = (_Bool)1;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
