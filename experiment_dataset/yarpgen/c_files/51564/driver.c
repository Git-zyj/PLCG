#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 4519644622513389898LL;
signed char var_1 = (signed char)3;
unsigned char var_3 = (unsigned char)200;
unsigned int var_4 = 4161186470U;
unsigned long long int var_5 = 8275485268605862580ULL;
_Bool var_9 = (_Bool)0;
short var_12 = (short)5015;
unsigned int var_14 = 4142667031U;
int zero = 0;
signed char var_16 = (signed char)-103;
signed char var_17 = (signed char)-57;
void init() {
}

void checksum() {
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
