#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1400353369;
long long int var_3 = 5720799794038849786LL;
int var_4 = -1072016090;
signed char var_5 = (signed char)-12;
unsigned short var_8 = (unsigned short)55708;
unsigned long long int var_9 = 9610227262916398054ULL;
int zero = 0;
int var_13 = -1014863973;
long long int var_14 = 7880503838520074437LL;
unsigned short var_15 = (unsigned short)25777;
long long int var_16 = -6893504361623748932LL;
long long int var_17 = 2433771670457451739LL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
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
