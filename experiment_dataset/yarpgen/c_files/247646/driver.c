#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-66;
signed char var_3 = (signed char)30;
int var_10 = -1058764538;
signed char var_12 = (signed char)118;
int zero = 0;
long long int var_20 = -873218701396631538LL;
unsigned char var_21 = (unsigned char)14;
unsigned short var_22 = (unsigned short)4041;
unsigned short var_23 = (unsigned short)1777;
unsigned short var_24 = (unsigned short)39659;
unsigned short var_25 = (unsigned short)59064;
unsigned int var_26 = 1453193704U;
unsigned long long int var_27 = 2529604093536774704ULL;
short arr_1 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_1 [i_0] = (short)-1681;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
