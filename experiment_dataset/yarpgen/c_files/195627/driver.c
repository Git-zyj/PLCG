#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-113;
int var_2 = 1824103420;
signed char var_4 = (signed char)77;
signed char var_5 = (signed char)111;
unsigned long long int var_6 = 7584558912322436836ULL;
signed char var_8 = (signed char)87;
signed char var_9 = (signed char)-101;
signed char var_13 = (signed char)-68;
signed char var_15 = (signed char)-120;
int var_16 = 678287657;
int zero = 0;
unsigned long long int var_18 = 1294149651376903962ULL;
long long int var_19 = 2439647248916230177LL;
signed char var_20 = (signed char)36;
long long int var_21 = 3259444207878255130LL;
unsigned long long int var_22 = 9062277097011997643ULL;
unsigned long long int arr_4 [23] [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_4 [i_0] [i_1] = 10487821272812931248ULL;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
