#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -4127154433708624588LL;
unsigned short var_1 = (unsigned short)11588;
_Bool var_5 = (_Bool)1;
unsigned long long int var_6 = 17822521291336305807ULL;
long long int var_7 = 8866290667067062983LL;
signed char var_12 = (signed char)-1;
short var_16 = (short)30207;
int zero = 0;
_Bool var_19 = (_Bool)1;
short var_20 = (short)25300;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
