#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 463599233863024213LL;
unsigned char var_15 = (unsigned char)168;
long long int var_16 = -4343349113144118418LL;
int zero = 0;
unsigned char var_17 = (unsigned char)47;
_Bool var_18 = (_Bool)0;
_Bool var_19 = (_Bool)1;
signed char var_20 = (signed char)107;
signed char var_21 = (signed char)-114;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
