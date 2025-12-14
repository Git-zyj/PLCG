#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_6 = (signed char)-66;
_Bool var_9 = (_Bool)1;
_Bool var_14 = (_Bool)0;
int zero = 0;
signed char var_16 = (signed char)-16;
unsigned char var_17 = (unsigned char)68;
int var_18 = 429699340;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
