#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_7 = (signed char)71;
signed char var_8 = (signed char)40;
int zero = 0;
_Bool var_16 = (_Bool)1;
signed char var_17 = (signed char)120;
signed char var_18 = (signed char)-51;
unsigned char var_19 = (unsigned char)65;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
