#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-29870;
long long int var_7 = 545464685269371637LL;
short var_8 = (short)25955;
short var_9 = (short)-18374;
int zero = 0;
short var_13 = (short)3413;
unsigned int var_14 = 2943222665U;
long long int var_15 = -3094189183163841001LL;
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
