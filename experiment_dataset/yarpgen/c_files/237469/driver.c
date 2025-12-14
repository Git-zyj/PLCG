#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 3904619982824567250ULL;
_Bool var_3 = (_Bool)1;
unsigned short var_5 = (unsigned short)44871;
unsigned long long int var_7 = 10056951238418785180ULL;
unsigned int var_9 = 1412692505U;
unsigned char var_11 = (unsigned char)32;
int var_14 = 635244741;
int zero = 0;
unsigned char var_17 = (unsigned char)241;
signed char var_18 = (signed char)-100;
unsigned long long int var_19 = 10129277886586053831ULL;
unsigned char var_20 = (unsigned char)187;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
