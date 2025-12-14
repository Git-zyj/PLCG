#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 7382430392834056893LL;
unsigned char var_9 = (unsigned char)235;
long long int var_10 = 368837319381338114LL;
int zero = 0;
_Bool var_12 = (_Bool)0;
unsigned int var_13 = 1251956397U;
unsigned long long int var_14 = 7046948610846511975ULL;
int var_15 = 1901310196;
signed char var_16 = (signed char)-27;
unsigned long long int var_17 = 7737919982900893255ULL;
int var_18 = 512628645;
int arr_0 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_0 [i_0] = -1432498246;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
