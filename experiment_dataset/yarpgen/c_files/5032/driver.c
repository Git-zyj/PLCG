#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-47;
unsigned char var_2 = (unsigned char)232;
short var_4 = (short)4300;
_Bool var_6 = (_Bool)1;
int zero = 0;
signed char var_10 = (signed char)-43;
int var_11 = -620665061;
signed char var_12 = (signed char)-12;
signed char var_13 = (signed char)-3;
_Bool var_14 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
