#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_5 = -584903485804057444LL;
unsigned long long int var_6 = 3047116141453885854ULL;
unsigned char var_7 = (unsigned char)196;
int var_8 = 82399618;
unsigned long long int var_9 = 10012240676439600952ULL;
int zero = 0;
short var_10 = (short)25714;
signed char var_11 = (signed char)55;
_Bool var_12 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
