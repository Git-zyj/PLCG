#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-28011;
int var_1 = 1005417554;
unsigned int var_3 = 1313656965U;
unsigned int var_4 = 495584429U;
signed char var_5 = (signed char)86;
long long int var_8 = -5781039473116978559LL;
int zero = 0;
_Bool var_11 = (_Bool)1;
unsigned int var_12 = 945594806U;
unsigned short var_13 = (unsigned short)2101;
signed char var_14 = (signed char)-119;
unsigned int var_15 = 4039118938U;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
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
