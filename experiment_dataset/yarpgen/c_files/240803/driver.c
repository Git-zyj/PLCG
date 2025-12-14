#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 78902011;
unsigned int var_5 = 1367271748U;
int var_7 = -1596665302;
short var_9 = (short)-28709;
unsigned int var_10 = 4010677008U;
int zero = 0;
unsigned long long int var_11 = 14544829679308421093ULL;
unsigned int var_12 = 2993777419U;
int var_13 = -893978069;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
