#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 6527195451867445143ULL;
unsigned long long int var_2 = 7194854924909649293ULL;
unsigned long long int var_4 = 13165362322152469508ULL;
unsigned long long int var_5 = 17595968666062056011ULL;
unsigned long long int var_10 = 18353890290341507294ULL;
unsigned long long int var_11 = 16924864331512527614ULL;
int zero = 0;
unsigned long long int var_12 = 13447184602278643242ULL;
unsigned long long int var_13 = 13536582749554941814ULL;
unsigned long long int var_14 = 1868743249591388565ULL;
unsigned long long int arr_0 [19] ;
unsigned long long int arr_2 [19] [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_0 [i_0] = 8710162371243476113ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_2 [i_0] [i_1] = 17432596755322709335ULL;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
