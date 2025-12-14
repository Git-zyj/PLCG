#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
int var_3 = -1581414255;
unsigned short var_4 = (unsigned short)29985;
long long int var_7 = 2527192678924269081LL;
int zero = 0;
signed char var_12 = (signed char)-73;
unsigned long long int var_13 = 6431336669071979429ULL;
short var_14 = (short)18199;
unsigned char var_15 = (unsigned char)7;
void init() {
}

void checksum() {
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
