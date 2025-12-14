#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 12625544734655046697ULL;
unsigned long long int var_4 = 514862603786949585ULL;
unsigned int var_8 = 2310487501U;
int zero = 0;
unsigned long long int var_12 = 5770145256618587165ULL;
unsigned char var_13 = (unsigned char)78;
unsigned long long int var_14 = 4668430030352002967ULL;
unsigned int var_15 = 954220443U;
unsigned long long int arr_0 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_0 [i_0] = 7268388925073568713ULL;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
