#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -1861581968;
unsigned short var_3 = (unsigned short)22050;
int var_5 = -1458291755;
int var_6 = -2031675305;
int var_10 = 1713205370;
unsigned short var_13 = (unsigned short)31043;
int zero = 0;
int var_14 = 1152062007;
unsigned short var_15 = (unsigned short)5768;
int var_16 = 107516825;
int var_17 = 1126039873;
unsigned short var_18 = (unsigned short)26725;
unsigned short var_19 = (unsigned short)22964;
unsigned short arr_6 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? (unsigned short)3918 : (unsigned short)41935;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
