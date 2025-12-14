#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 418884261U;
_Bool var_5 = (_Bool)1;
long long int var_7 = -2644615880871397095LL;
int var_8 = 312885259;
unsigned short var_12 = (unsigned short)27069;
_Bool var_15 = (_Bool)1;
signed char var_17 = (signed char)66;
short var_18 = (short)25971;
int zero = 0;
short var_19 = (short)17027;
unsigned long long int var_20 = 14839198067290894591ULL;
unsigned long long int var_21 = 7052018659533784490ULL;
signed char var_22 = (signed char)118;
long long int var_23 = -7847188491441175150LL;
_Bool var_24 = (_Bool)0;
int var_25 = 1852275957;
unsigned long long int arr_0 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_0 [i_0] = 12663126415419140070ULL;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
