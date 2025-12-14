#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 7363771939290661166ULL;
unsigned int var_1 = 4111006118U;
unsigned long long int var_6 = 4147589661548925520ULL;
_Bool var_7 = (_Bool)0;
long long int var_8 = 7462072783854105654LL;
long long int var_9 = -442420906739647716LL;
_Bool var_11 = (_Bool)0;
unsigned long long int var_13 = 10188177973636411889ULL;
unsigned char var_14 = (unsigned char)193;
_Bool var_15 = (_Bool)1;
_Bool var_16 = (_Bool)1;
int zero = 0;
unsigned char var_17 = (unsigned char)109;
unsigned char var_18 = (unsigned char)82;
void init() {
}

void checksum() {
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
