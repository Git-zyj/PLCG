#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-72;
unsigned char var_1 = (unsigned char)231;
unsigned long long int var_2 = 13706915202515637982ULL;
int var_3 = 2106768943;
unsigned long long int var_8 = 17916443632724313307ULL;
unsigned char var_9 = (unsigned char)196;
_Bool var_10 = (_Bool)0;
int zero = 0;
_Bool var_13 = (_Bool)0;
unsigned char var_14 = (unsigned char)172;
signed char var_15 = (signed char)-101;
_Bool var_16 = (_Bool)0;
signed char var_17 = (signed char)87;
unsigned long long int arr_2 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_2 [i_0] = 6339771109244001826ULL;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
