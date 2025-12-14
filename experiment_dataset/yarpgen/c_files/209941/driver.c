#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)36;
signed char var_5 = (signed char)107;
signed char var_9 = (signed char)-67;
signed char var_13 = (signed char)-25;
int zero = 0;
signed char var_16 = (signed char)80;
signed char var_17 = (signed char)-42;
signed char var_18 = (signed char)20;
signed char var_19 = (signed char)-74;
signed char var_20 = (signed char)-49;
signed char arr_9 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_9 [i_0] = (signed char)97;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_9 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
