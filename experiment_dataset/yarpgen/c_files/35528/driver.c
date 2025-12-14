#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-59;
_Bool var_8 = (_Bool)1;
long long int var_15 = 3067483071482772500LL;
int zero = 0;
unsigned long long int var_20 = 10559858791393137643ULL;
unsigned int var_21 = 2468361265U;
unsigned int var_22 = 4201199169U;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
