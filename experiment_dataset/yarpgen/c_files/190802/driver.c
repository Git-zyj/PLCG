#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 8179089090676710008LL;
long long int var_2 = 1335655017716564325LL;
long long int var_3 = 3920726238256230898LL;
long long int var_8 = -8436814359310839573LL;
long long int var_9 = 4211736992845185329LL;
long long int var_10 = 969756293819873889LL;
long long int var_12 = 5338881528616859539LL;
long long int var_13 = 5732684699651314993LL;
int zero = 0;
long long int var_14 = -628862801370906667LL;
long long int var_15 = -1288397848054894384LL;
long long int var_16 = 1148454831418679882LL;
long long int var_17 = 2359599990497229940LL;
long long int var_18 = 7620260163701215801LL;
long long int var_19 = 7810034350305143640LL;
long long int arr_2 [20] [20] [20] ;
long long int arr_4 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = 1188633499618099690LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_4 [i_0] = -308379988584009994LL;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
