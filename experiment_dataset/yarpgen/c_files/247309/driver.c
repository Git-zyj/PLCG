#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -1715212771346006161LL;
long long int var_4 = -8376954406759848695LL;
unsigned long long int var_6 = 12809320354120062737ULL;
_Bool var_9 = (_Bool)1;
int zero = 0;
unsigned long long int var_11 = 142401616865354992ULL;
long long int var_12 = -9061280665497304217LL;
signed char var_13 = (signed char)117;
unsigned long long int var_14 = 4103620027022049988ULL;
unsigned int var_15 = 2891996906U;
signed char var_16 = (signed char)-4;
int arr_5 [19] [19] [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? -411083238 : 1197755284;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
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
