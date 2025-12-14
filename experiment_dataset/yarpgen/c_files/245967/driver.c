#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)41760;
signed char var_1 = (signed char)29;
unsigned long long int var_4 = 15611902024308492071ULL;
int var_5 = -649323248;
int var_6 = 716797466;
short var_10 = (short)-25325;
unsigned long long int var_13 = 14258331812663065792ULL;
long long int var_15 = 8998783263040041128LL;
int zero = 0;
unsigned long long int var_16 = 12671893448387180906ULL;
int var_17 = 1977965100;
unsigned int var_18 = 3694121928U;
short var_19 = (short)-11270;
signed char var_20 = (signed char)-30;
unsigned long long int arr_3 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_3 [i_0] = 15401451527765072959ULL;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
