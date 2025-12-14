#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-116;
short var_2 = (short)12746;
unsigned long long int var_4 = 1214391373738344797ULL;
unsigned long long int var_6 = 12913866218110357541ULL;
signed char var_12 = (signed char)76;
int zero = 0;
unsigned short var_20 = (unsigned short)55815;
int var_21 = -1033450160;
unsigned long long int var_22 = 10810566628017356086ULL;
signed char arr_3 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_3 [i_0] = (signed char)81;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
