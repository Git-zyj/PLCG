#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)25;
unsigned int var_4 = 3891848118U;
unsigned char var_7 = (unsigned char)229;
short var_13 = (short)-1195;
int zero = 0;
unsigned char var_20 = (unsigned char)37;
signed char var_21 = (signed char)-66;
unsigned long long int var_22 = 6398205196895629680ULL;
_Bool var_23 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
