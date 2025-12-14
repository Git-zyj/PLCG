#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = -1277270306;
signed char var_5 = (signed char)-118;
long long int var_9 = 4692978358507261422LL;
signed char var_11 = (signed char)109;
int zero = 0;
signed char var_13 = (signed char)74;
short var_14 = (short)6446;
unsigned short var_15 = (unsigned short)8992;
signed char var_16 = (signed char)67;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
