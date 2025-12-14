#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2626084986U;
unsigned int var_2 = 2733493038U;
long long int var_8 = 7359173658827425124LL;
unsigned int var_10 = 500443405U;
int zero = 0;
unsigned long long int var_13 = 5754389637922467406ULL;
int var_14 = -1212073036;
int var_15 = -207544365;
unsigned long long int arr_8 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_8 [i_0] = 5322763873314074507ULL;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_8 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
