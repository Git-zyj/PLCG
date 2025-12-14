#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 17813501623573348657ULL;
short var_6 = (short)8198;
_Bool var_13 = (_Bool)1;
short var_16 = (short)-7305;
int zero = 0;
unsigned char var_19 = (unsigned char)10;
long long int var_20 = 8218495700755191961LL;
unsigned int var_21 = 3489980247U;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
