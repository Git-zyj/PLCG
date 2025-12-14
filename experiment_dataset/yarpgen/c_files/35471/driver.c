#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_8 = 12363739284197405457ULL;
unsigned short var_12 = (unsigned short)7852;
unsigned short var_15 = (unsigned short)41585;
int zero = 0;
long long int var_17 = 5776780833342456488LL;
long long int var_18 = -5502232194764230676LL;
unsigned short var_19 = (unsigned short)63052;
unsigned short var_20 = (unsigned short)18075;
unsigned long long int var_21 = 9128584709732599238ULL;
long long int arr_4 [18] [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_4 [i_0] [i_1] = -7638742280680983766LL;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
