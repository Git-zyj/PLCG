#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1178991112U;
unsigned long long int var_2 = 4370003003549415935ULL;
signed char var_7 = (signed char)43;
int zero = 0;
int var_13 = 1369630735;
long long int var_14 = 232275517768307955LL;
unsigned short var_15 = (unsigned short)53905;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
