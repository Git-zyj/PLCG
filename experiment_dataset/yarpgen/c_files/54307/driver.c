#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)12;
signed char var_4 = (signed char)89;
int var_8 = -2092405630;
long long int var_10 = -1873694254812653432LL;
long long int var_12 = 563691062964227217LL;
int zero = 0;
signed char var_13 = (signed char)-57;
unsigned short var_14 = (unsigned short)14316;
unsigned long long int var_15 = 9624943031571768033ULL;
signed char arr_1 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_1 [i_0] = (signed char)125;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
