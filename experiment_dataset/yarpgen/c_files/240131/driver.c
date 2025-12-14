#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 1189004987U;
unsigned int var_5 = 258138459U;
long long int var_6 = 6486315878766963849LL;
unsigned int var_7 = 2720813243U;
unsigned long long int var_12 = 4131403883197054053ULL;
long long int var_14 = -5633405329444511459LL;
unsigned long long int var_15 = 15497437103100261594ULL;
int zero = 0;
unsigned char var_19 = (unsigned char)246;
long long int var_20 = -8116481256785634863LL;
unsigned long long int var_21 = 6228192463975869391ULL;
long long int var_22 = 3928877889174357089LL;
long long int arr_2 [12] ;
unsigned long long int arr_3 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_2 [i_0] = 8261574943808044842LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_3 [i_0] = 3728849817623684581ULL;
}

void checksum() {
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
