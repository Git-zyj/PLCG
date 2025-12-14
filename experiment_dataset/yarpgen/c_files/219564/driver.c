#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 15191503549754646455ULL;
signed char var_2 = (signed char)3;
_Bool var_6 = (_Bool)0;
signed char var_9 = (signed char)-11;
unsigned short var_13 = (unsigned short)44358;
int zero = 0;
unsigned int var_14 = 2401502647U;
unsigned long long int var_15 = 18354406851937891009ULL;
unsigned int var_16 = 3818400386U;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
