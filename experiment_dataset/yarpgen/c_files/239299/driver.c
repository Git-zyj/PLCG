#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)121;
unsigned int var_1 = 261060122U;
_Bool var_2 = (_Bool)1;
unsigned long long int var_6 = 4950390874366350727ULL;
unsigned int var_7 = 1785537695U;
unsigned int var_8 = 2233894553U;
int var_9 = -1067896277;
int zero = 0;
unsigned long long int var_12 = 1552803566739794131ULL;
unsigned short var_13 = (unsigned short)10022;
unsigned long long int var_14 = 16951168949128237330ULL;
unsigned int var_15 = 3540619347U;
int arr_0 [10] [10] ;
int arr_2 [10] ;
unsigned int arr_4 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_0 [i_0] [i_1] = -1544072813;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_2 [i_0] = 1476034470;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? 1021500937U : 2426712031U;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
