#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)53098;
long long int var_3 = 7652479721186558235LL;
long long int var_4 = 4898591011012353212LL;
unsigned long long int var_8 = 4819274218288845778ULL;
_Bool var_9 = (_Bool)0;
int var_10 = -411447417;
unsigned int var_12 = 4161369632U;
int zero = 0;
unsigned char var_17 = (unsigned char)11;
unsigned char var_18 = (unsigned char)216;
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
