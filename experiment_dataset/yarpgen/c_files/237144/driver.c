#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 3621590671082155169LL;
long long int var_1 = -7609537222146431656LL;
int zero = 0;
long long int var_19 = -7557767892366407896LL;
long long int var_20 = -5511986613903676901LL;
unsigned short var_21 = (unsigned short)46551;
void init() {
}

void checksum() {
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
