#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 15932430526556046430ULL;
int var_6 = -1761279201;
int var_7 = -1065123358;
unsigned char var_12 = (unsigned char)40;
long long int var_18 = 8555807397240652465LL;
unsigned short var_19 = (unsigned short)19592;
int zero = 0;
unsigned long long int var_20 = 3888653919907191416ULL;
long long int var_21 = -2474176498052673835LL;
unsigned int var_22 = 2971169557U;
long long int var_23 = -1077159208226755761LL;
long long int arr_0 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_0 [i_0] = 5795761895292628487LL;
}

void checksum() {
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
