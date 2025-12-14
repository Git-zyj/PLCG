#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)162;
long long int var_7 = -1576170265203460955LL;
_Bool var_14 = (_Bool)1;
int var_16 = -1339612953;
int zero = 0;
unsigned char var_17 = (unsigned char)10;
unsigned long long int var_18 = 17096625393828800532ULL;
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
