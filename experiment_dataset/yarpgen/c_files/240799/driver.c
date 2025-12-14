#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -8274774355402887500LL;
_Bool var_3 = (_Bool)1;
int var_9 = 2072667206;
unsigned char var_10 = (unsigned char)9;
int zero = 0;
long long int var_11 = 1498407073892034293LL;
_Bool var_12 = (_Bool)1;
unsigned char var_13 = (unsigned char)103;
long long int arr_0 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_0 [i_0] = 9073232100739604193LL;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
