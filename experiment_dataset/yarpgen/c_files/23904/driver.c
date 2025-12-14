#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 396632758U;
long long int var_4 = 8128764349526181489LL;
unsigned short var_5 = (unsigned short)53235;
unsigned long long int var_6 = 6910529337382382634ULL;
unsigned short var_7 = (unsigned short)51231;
long long int var_10 = -6843148923875559697LL;
unsigned short var_11 = (unsigned short)27450;
unsigned long long int var_12 = 14158355428125543323ULL;
int zero = 0;
unsigned long long int var_13 = 287224248383204502ULL;
long long int var_14 = 2423685293916402313LL;
unsigned short var_15 = (unsigned short)63205;
unsigned long long int var_16 = 3716527218783975201ULL;
unsigned short var_17 = (unsigned short)25001;
unsigned short arr_4 [21] [21] [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (unsigned short)63028;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
