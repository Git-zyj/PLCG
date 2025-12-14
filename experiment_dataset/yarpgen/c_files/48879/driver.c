#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_7 = (signed char)-28;
int zero = 0;
signed char var_13 = (signed char)111;
signed char var_14 = (signed char)-120;
long long int var_15 = -2526000865681680914LL;
signed char var_16 = (signed char)-104;
signed char var_17 = (signed char)94;
signed char var_18 = (signed char)45;
signed char var_19 = (signed char)-77;
long long int arr_6 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_6 [i_0] = -3004407313252088728LL;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
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
