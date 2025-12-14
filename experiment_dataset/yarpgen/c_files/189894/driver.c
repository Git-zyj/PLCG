#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
_Bool var_3 = (_Bool)1;
signed char var_6 = (signed char)-79;
unsigned char var_10 = (unsigned char)190;
unsigned char var_11 = (unsigned char)187;
int zero = 0;
unsigned int var_16 = 3458273101U;
_Bool var_17 = (_Bool)1;
unsigned long long int var_18 = 11015746422328756429ULL;
unsigned char var_19 = (unsigned char)161;
signed char var_20 = (signed char)124;
int var_21 = -1379651805;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
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
