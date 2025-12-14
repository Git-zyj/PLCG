#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_5 = (unsigned char)168;
unsigned long long int var_9 = 14065045056406310549ULL;
unsigned int var_19 = 3330825967U;
int zero = 0;
unsigned int var_20 = 3036874262U;
unsigned int var_21 = 1121857374U;
int var_22 = -512265659;
long long int var_23 = -6137461435698739585LL;
unsigned char var_24 = (unsigned char)160;
unsigned int arr_3 [19] ;
unsigned char arr_4 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_3 [i_0] = 1891023360U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_4 [i_0] = (unsigned char)34;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
