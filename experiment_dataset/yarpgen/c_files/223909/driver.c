#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_5 = 4125116802U;
long long int var_8 = 3292448876804069776LL;
unsigned int var_15 = 3601715196U;
int zero = 0;
long long int var_17 = -5913619795531238990LL;
short var_18 = (short)6367;
unsigned char var_19 = (unsigned char)44;
void init() {
}

void checksum() {
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
