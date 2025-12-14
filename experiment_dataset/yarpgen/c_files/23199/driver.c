#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)25547;
signed char var_3 = (signed char)-39;
unsigned long long int var_5 = 1119809383664968808ULL;
unsigned char var_6 = (unsigned char)210;
_Bool var_7 = (_Bool)1;
int zero = 0;
long long int var_11 = -8617217973469027490LL;
unsigned int var_12 = 622853937U;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
