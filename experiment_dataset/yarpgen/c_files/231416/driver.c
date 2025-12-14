#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -101854781;
signed char var_6 = (signed char)-15;
short var_7 = (short)-30372;
signed char var_9 = (signed char)-66;
long long int var_10 = -2673803690185603092LL;
short var_11 = (short)25526;
int zero = 0;
short var_12 = (short)22094;
short var_13 = (short)-8102;
long long int var_14 = 5794824005128545147LL;
signed char var_15 = (signed char)-21;
short var_16 = (short)6978;
short var_17 = (short)-4389;
signed char var_18 = (signed char)-54;
int arr_0 [22] ;
int arr_1 [22] [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_0 [i_0] = -1042368272;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_1 [i_0] [i_1] = -1411067347;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
