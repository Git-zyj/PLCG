#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_6 = 449284624;
unsigned char var_9 = (unsigned char)214;
int zero = 0;
unsigned long long int var_12 = 1134416158014546152ULL;
unsigned long long int var_13 = 16530748391290946807ULL;
signed char var_14 = (signed char)47;
long long int var_15 = -5475897434471547429LL;
unsigned long long int arr_0 [17] ;
long long int arr_1 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_0 [i_0] = 12673391773054126947ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_1 [i_0] = -7053936698677729543LL;
}

void checksum() {
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
