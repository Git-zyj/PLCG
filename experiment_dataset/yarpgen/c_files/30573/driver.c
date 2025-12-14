#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_5 = (short)-28331;
signed char var_6 = (signed char)-35;
unsigned long long int var_13 = 14896348502745732250ULL;
int zero = 0;
unsigned long long int var_14 = 9493030363215782702ULL;
unsigned long long int var_15 = 7833620935411246895ULL;
unsigned int var_16 = 2931028589U;
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
