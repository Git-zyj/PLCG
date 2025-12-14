#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)9080;
unsigned long long int var_2 = 14029503949514418961ULL;
unsigned long long int var_3 = 3808240488298583656ULL;
unsigned short var_5 = (unsigned short)6058;
unsigned long long int var_6 = 16472157310388396103ULL;
signed char var_8 = (signed char)-79;
unsigned long long int var_9 = 8783561152488777333ULL;
int zero = 0;
_Bool var_12 = (_Bool)0;
unsigned int var_13 = 1055818132U;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
