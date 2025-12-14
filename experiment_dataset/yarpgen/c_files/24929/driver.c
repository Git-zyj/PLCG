#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 4153134931077817148ULL;
int var_7 = -1617658663;
unsigned long long int var_8 = 16671719804313516369ULL;
int zero = 0;
unsigned long long int var_10 = 17441020204009882096ULL;
int var_11 = -134095259;
int var_12 = -205894830;
unsigned long long int arr_7 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_7 [i_0] = 3331843603458485733ULL;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
