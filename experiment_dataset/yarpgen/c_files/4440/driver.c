#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
unsigned int var_3 = 2924943877U;
int var_4 = -493142886;
_Bool var_7 = (_Bool)1;
long long int var_8 = 6175365758507821012LL;
short var_9 = (short)-27613;
int zero = 0;
long long int var_10 = 6789421760648303527LL;
unsigned short var_11 = (unsigned short)19579;
unsigned int var_12 = 3825228883U;
short var_13 = (short)-32299;
short var_14 = (short)434;
long long int arr_1 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_1 [i_0] = -6952140489144376771LL;
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
