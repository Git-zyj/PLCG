#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 6975361126953391410ULL;
_Bool var_6 = (_Bool)1;
signed char var_8 = (signed char)-123;
unsigned long long int var_10 = 17751689105475584035ULL;
unsigned long long int var_12 = 9438584046436343556ULL;
int zero = 0;
unsigned long long int var_14 = 8704493105621040022ULL;
signed char var_15 = (signed char)68;
void init() {
}

void checksum() {
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
