#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)92;
unsigned long long int var_1 = 2864624354197517270ULL;
long long int var_2 = -366282787472841890LL;
signed char var_3 = (signed char)-55;
unsigned long long int var_4 = 15882633099757320324ULL;
_Bool var_5 = (_Bool)1;
short var_6 = (short)-32451;
unsigned long long int var_7 = 2164149029770089084ULL;
short var_8 = (short)-4897;
_Bool var_9 = (_Bool)0;
int zero = 0;
int var_10 = 1743606026;
long long int var_11 = 8256380543571660814LL;
long long int var_12 = 2761994660759283635LL;
_Bool var_13 = (_Bool)1;
unsigned long long int var_14 = 4692189049511224867ULL;
_Bool var_15 = (_Bool)1;
signed char arr_3 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_3 [i_0] = (signed char)67;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
