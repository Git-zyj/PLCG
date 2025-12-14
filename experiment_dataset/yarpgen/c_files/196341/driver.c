#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 7721014595027876140LL;
short var_3 = (short)-20709;
long long int var_4 = 3281803974218459827LL;
unsigned long long int var_7 = 4913502620256954270ULL;
int zero = 0;
unsigned long long int var_11 = 2311698529853369201ULL;
unsigned long long int var_12 = 2693237745150517437ULL;
long long int var_13 = 1043543325396374442LL;
int var_14 = -1076109571;
unsigned long long int arr_1 [15] [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_1 [i_0] [i_1] = 13205961865091189161ULL;
}

void checksum() {
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
