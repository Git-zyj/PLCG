#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 3701025650504175053ULL;
signed char var_3 = (signed char)67;
unsigned char var_5 = (unsigned char)217;
int var_6 = 1784521694;
_Bool var_8 = (_Bool)1;
int zero = 0;
short var_17 = (short)25751;
unsigned char var_18 = (unsigned char)46;
long long int var_19 = 789877718312349305LL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
