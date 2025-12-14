#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_5 = (signed char)47;
long long int var_6 = -1719472147271591042LL;
unsigned char var_9 = (unsigned char)76;
signed char var_10 = (signed char)45;
int var_12 = -1791041821;
int zero = 0;
unsigned char var_13 = (unsigned char)39;
int var_14 = 1504322536;
_Bool var_15 = (_Bool)0;
int var_16 = 1145501143;
int arr_0 [11] ;
int arr_3 [11] [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_0 [i_0] = -996425314;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_3 [i_0] [i_1] = 953131513;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
