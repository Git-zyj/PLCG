#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = 5104740503715742958LL;
int var_8 = 1763301102;
unsigned char var_9 = (unsigned char)202;
int zero = 0;
long long int var_10 = 854396815687170949LL;
short var_11 = (short)8123;
signed char var_12 = (signed char)-88;
signed char var_13 = (signed char)80;
int var_14 = 1219356549;
_Bool arr_2 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_2 [i_0] = (_Bool)1;
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
