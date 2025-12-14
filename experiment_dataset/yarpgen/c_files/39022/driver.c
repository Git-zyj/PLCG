#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
long long int var_1 = -4408688170189549150LL;
_Bool var_3 = (_Bool)0;
signed char var_5 = (signed char)33;
int var_6 = -1173422013;
signed char var_7 = (signed char)-39;
long long int var_8 = -2971082385453514102LL;
unsigned char var_9 = (unsigned char)203;
_Bool var_11 = (_Bool)1;
int zero = 0;
int var_13 = -113289261;
unsigned long long int var_14 = 15542625385668021824ULL;
unsigned long long int var_15 = 5119370142366854246ULL;
void init() {
}

void checksum() {
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
