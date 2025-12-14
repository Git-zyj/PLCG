#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_5 = -3518043226367742289LL;
long long int var_9 = 3785447357377361038LL;
long long int var_10 = 5211852305712194890LL;
long long int var_12 = -2907928121655861483LL;
int zero = 0;
long long int var_19 = -7734279583489977500LL;
signed char var_20 = (signed char)-51;
long long int var_21 = 6863528475274864930LL;
signed char var_22 = (signed char)20;
signed char arr_1 [17] [17] ;
signed char arr_2 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_1 [i_0] [i_1] = (signed char)80;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_2 [i_0] = (signed char)-99;
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
