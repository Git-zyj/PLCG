#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -7006068449594480046LL;
signed char var_8 = (signed char)94;
_Bool var_12 = (_Bool)1;
int zero = 0;
unsigned short var_19 = (unsigned short)11562;
signed char var_20 = (signed char)24;
void init() {
}

void checksum() {
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
