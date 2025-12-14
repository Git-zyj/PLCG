#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)125;
unsigned char var_4 = (unsigned char)62;
unsigned char var_5 = (unsigned char)222;
unsigned long long int var_6 = 16284511032216670616ULL;
unsigned long long int var_17 = 15640077770436287513ULL;
unsigned long long int var_18 = 8586595639192446819ULL;
int zero = 0;
signed char var_19 = (signed char)-78;
signed char var_20 = (signed char)-24;
unsigned long long int var_21 = 13830433563094769401ULL;
unsigned char arr_4 [15] [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_4 [i_0] [i_1] = (unsigned char)153;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
