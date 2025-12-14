#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)17124;
_Bool var_5 = (_Bool)1;
long long int var_6 = 6619829712960367798LL;
unsigned long long int var_7 = 2222026477665276820ULL;
signed char var_8 = (signed char)-1;
unsigned long long int var_9 = 4972407651533235906ULL;
unsigned char var_11 = (unsigned char)245;
unsigned short var_14 = (unsigned short)49152;
int zero = 0;
unsigned short var_17 = (unsigned short)35027;
long long int var_18 = -970974261376089064LL;
short var_19 = (short)29133;
unsigned char var_20 = (unsigned char)186;
int var_21 = -45188658;
int arr_6 [20] [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_6 [i_0] [i_1] = -1508703536;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
