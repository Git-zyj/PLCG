#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)20;
unsigned char var_1 = (unsigned char)102;
unsigned short var_2 = (unsigned short)35655;
unsigned short var_4 = (unsigned short)64040;
unsigned char var_7 = (unsigned char)55;
unsigned int var_8 = 1195067757U;
unsigned char var_9 = (unsigned char)108;
unsigned char var_12 = (unsigned char)19;
unsigned char var_13 = (unsigned char)140;
int zero = 0;
long long int var_15 = 4023272697837603226LL;
int var_16 = -1742389436;
unsigned long long int var_17 = 10801966412036021113ULL;
unsigned char var_18 = (unsigned char)215;
unsigned char var_19 = (unsigned char)44;
long long int var_20 = 6458592753147611259LL;
unsigned short var_21 = (unsigned short)39830;
unsigned char arr_3 [18] [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_3 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned char)242 : (unsigned char)170;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
