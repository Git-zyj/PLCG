#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_8 = 6718222863442152016ULL;
unsigned char var_17 = (unsigned char)40;
int zero = 0;
signed char var_18 = (signed char)-59;
long long int var_19 = -1419705417752876142LL;
long long int var_20 = 9182198479751861489LL;
unsigned int var_21 = 3516390690U;
_Bool var_22 = (_Bool)1;
long long int var_23 = -5772749517091606964LL;
unsigned long long int arr_2 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_2 [i_0] = 17687840345955166637ULL;
}

void checksum() {
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
