#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-28;
signed char var_4 = (signed char)-89;
signed char var_7 = (signed char)-103;
short var_10 = (short)-1;
short var_11 = (short)-29228;
signed char var_13 = (signed char)-82;
signed char var_15 = (signed char)117;
short var_16 = (short)3808;
int zero = 0;
signed char var_17 = (signed char)-26;
unsigned char var_18 = (unsigned char)172;
short var_19 = (short)28902;
signed char var_20 = (signed char)-117;
short arr_2 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_2 [i_0] = (short)-21848;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
