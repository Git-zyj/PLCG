#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)7;
int var_1 = 1051793628;
int var_2 = -1465508199;
unsigned int var_5 = 3221145828U;
signed char var_6 = (signed char)-73;
long long int var_7 = 2085433021517344986LL;
_Bool var_9 = (_Bool)1;
int var_10 = 1000707008;
unsigned char var_11 = (unsigned char)84;
_Bool var_13 = (_Bool)1;
int zero = 0;
unsigned long long int var_14 = 3641480883643993366ULL;
long long int var_15 = 1871262624662019642LL;
_Bool var_16 = (_Bool)1;
int var_17 = -685274285;
_Bool var_18 = (_Bool)0;
int var_19 = 76100974;
unsigned long long int var_20 = 2221085462258008996ULL;
unsigned int var_21 = 1588860867U;
int var_22 = -40647461;
unsigned int arr_7 [23] [23] [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? 2369303959U : 3571081065U;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
