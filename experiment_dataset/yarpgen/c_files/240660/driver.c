#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-42;
int var_3 = -1808398509;
long long int var_6 = -6941376783519696042LL;
signed char var_7 = (signed char)-80;
unsigned short var_8 = (unsigned short)17833;
long long int var_10 = 4318446478069636151LL;
unsigned int var_11 = 3296726735U;
signed char var_12 = (signed char)-51;
_Bool var_13 = (_Bool)0;
int zero = 0;
signed char var_14 = (signed char)-67;
unsigned int var_15 = 2824865645U;
_Bool var_16 = (_Bool)0;
unsigned int var_17 = 2350273985U;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
