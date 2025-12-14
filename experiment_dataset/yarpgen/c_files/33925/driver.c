#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)45181;
signed char var_2 = (signed char)114;
long long int var_3 = 7756712630764918405LL;
unsigned long long int var_5 = 12264119696786566785ULL;
int zero = 0;
unsigned int var_10 = 1563055656U;
int var_11 = -1961984907;
short var_12 = (short)27618;
_Bool var_13 = (_Bool)1;
unsigned long long int arr_0 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_0 [i_0] = 434735601275677838ULL;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
