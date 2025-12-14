#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 8854075615897651778LL;
unsigned long long int var_3 = 2622822729366709024ULL;
unsigned long long int var_6 = 915407961051406450ULL;
int zero = 0;
unsigned char var_13 = (unsigned char)14;
unsigned short var_14 = (unsigned short)57136;
_Bool var_15 = (_Bool)1;
unsigned long long int var_16 = 15578640283746870189ULL;
signed char var_17 = (signed char)123;
unsigned short arr_1 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_1 [i_0] = (unsigned short)14543;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
