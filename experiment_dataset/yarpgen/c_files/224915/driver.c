#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -779901230946463423LL;
_Bool var_1 = (_Bool)1;
unsigned int var_2 = 761811042U;
long long int var_3 = 141981723045211164LL;
unsigned short var_8 = (unsigned short)31912;
_Bool var_11 = (_Bool)1;
int zero = 0;
unsigned long long int var_16 = 5589926012264860839ULL;
unsigned char var_17 = (unsigned char)7;
unsigned int var_18 = 3862659437U;
unsigned int var_19 = 331652224U;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
