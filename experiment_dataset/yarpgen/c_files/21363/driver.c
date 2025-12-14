#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 3376204327022610718ULL;
signed char var_5 = (signed char)-19;
signed char var_8 = (signed char)-58;
_Bool var_11 = (_Bool)1;
unsigned long long int var_13 = 18276888794545583584ULL;
unsigned char var_14 = (unsigned char)178;
int zero = 0;
_Bool var_17 = (_Bool)1;
long long int var_18 = -9172747399385629062LL;
unsigned char var_19 = (unsigned char)165;
void init() {
}

void checksum() {
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
