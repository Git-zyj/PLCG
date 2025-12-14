#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_8 = 9202020957684764696LL;
int var_9 = 1823457828;
int zero = 0;
int var_10 = -1840843260;
int var_11 = -1837088381;
short var_12 = (short)-8998;
signed char arr_0 [18] [18] ;
int arr_1 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_0 [i_0] [i_1] = (signed char)-13;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_1 [i_0] = -312560368;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
