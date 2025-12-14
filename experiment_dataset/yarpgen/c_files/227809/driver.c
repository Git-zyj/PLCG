#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)13432;
long long int var_4 = -8844711921630221165LL;
long long int var_6 = 6814452912225138627LL;
int var_10 = -670352114;
unsigned long long int var_11 = 13018687494063755282ULL;
int var_18 = 171548765;
int zero = 0;
int var_20 = 1868537342;
unsigned long long int var_21 = 17447323799624620802ULL;
void init() {
}

void checksum() {
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
