#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)29;
int var_6 = 528946220;
long long int var_7 = -1792757218303597395LL;
long long int var_8 = -8329435360536901118LL;
unsigned short var_9 = (unsigned short)34495;
long long int var_10 = 8727173635573288480LL;
long long int var_11 = -103553589914364377LL;
_Bool var_12 = (_Bool)0;
_Bool var_13 = (_Bool)0;
int zero = 0;
_Bool var_15 = (_Bool)1;
unsigned long long int var_16 = 14094302209321044723ULL;
long long int var_17 = -3554328850239970711LL;
long long int var_18 = -5780785400972248326LL;
unsigned int var_19 = 1548981122U;
unsigned long long int var_20 = 5649607056808459585ULL;
_Bool var_21 = (_Bool)0;
signed char var_22 = (signed char)-66;
unsigned int var_23 = 1407854693U;
long long int arr_0 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_0 [i_0] = -1581839842819232595LL;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
