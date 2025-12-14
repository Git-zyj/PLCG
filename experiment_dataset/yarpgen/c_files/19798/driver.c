#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)44203;
long long int var_2 = 7340708781215109655LL;
long long int var_5 = -3354762288011936921LL;
unsigned int var_8 = 2805902880U;
int zero = 0;
unsigned long long int var_10 = 10196211407848935000ULL;
long long int var_11 = 682344938200388122LL;
signed char var_12 = (signed char)125;
long long int var_13 = -8764192485465430024LL;
_Bool var_14 = (_Bool)1;
unsigned long long int arr_1 [20] ;
unsigned short arr_6 [20] ;
unsigned short arr_9 [20] [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_1 [i_0] = 3983972957345074903ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_6 [i_0] = (unsigned short)22044;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_9 [i_0] [i_1] = (unsigned short)7873;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
