#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_4 = -168249469;
_Bool var_12 = (_Bool)0;
unsigned char var_15 = (unsigned char)225;
int zero = 0;
signed char var_18 = (signed char)14;
unsigned char var_19 = (unsigned char)241;
signed char var_20 = (signed char)-74;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
