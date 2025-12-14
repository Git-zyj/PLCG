#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)231;
_Bool var_3 = (_Bool)0;
int var_4 = -1310282156;
long long int var_6 = 3297064719302261543LL;
signed char var_10 = (signed char)-125;
long long int var_14 = -8553663248010067586LL;
int zero = 0;
_Bool var_17 = (_Bool)1;
long long int var_18 = 789025968318404263LL;
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
