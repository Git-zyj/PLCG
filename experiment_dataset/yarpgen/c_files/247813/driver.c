#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_7 = (unsigned short)44316;
unsigned char var_13 = (unsigned char)253;
int var_15 = -1397187251;
signed char var_18 = (signed char)-34;
int zero = 0;
_Bool var_20 = (_Bool)1;
unsigned long long int var_21 = 6526689496278041542ULL;
signed char var_22 = (signed char)45;
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
