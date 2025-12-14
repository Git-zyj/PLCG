#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -4209913834501203141LL;
unsigned int var_6 = 386457358U;
signed char var_8 = (signed char)-84;
unsigned char var_9 = (unsigned char)11;
signed char var_10 = (signed char)-126;
_Bool var_11 = (_Bool)0;
signed char var_12 = (signed char)-75;
int zero = 0;
short var_13 = (short)434;
signed char var_14 = (signed char)13;
long long int var_15 = -7898960940413462146LL;
unsigned short var_16 = (unsigned short)59264;
long long int var_17 = -4760185096223090742LL;
unsigned short var_18 = (unsigned short)64613;
unsigned short var_19 = (unsigned short)25358;
long long int arr_0 [22] ;
signed char arr_1 [22] ;
unsigned int arr_5 [19] [19] ;
int arr_2 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? -7119712328007263718LL : 1426026508393952334LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_1 [i_0] = (signed char)8;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_5 [i_0] [i_1] = 2729806240U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? 1103201826 : -496146263;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
