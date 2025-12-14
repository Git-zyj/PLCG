#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 9835767493759384290ULL;
long long int var_5 = -6414519145117186663LL;
unsigned short var_8 = (unsigned short)22177;
long long int var_9 = -4463482483182764119LL;
int zero = 0;
unsigned long long int var_17 = 16003919562193267144ULL;
unsigned short var_18 = (unsigned short)36373;
unsigned long long int var_19 = 10232841679301359794ULL;
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
