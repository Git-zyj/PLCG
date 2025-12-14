#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = 135458803;
_Bool var_4 = (_Bool)1;
signed char var_9 = (signed char)90;
short var_11 = (short)19652;
int zero = 0;
unsigned long long int var_16 = 4167676456443179340ULL;
int var_17 = -8552149;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
