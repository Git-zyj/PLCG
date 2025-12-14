#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 548064447599511734LL;
short var_2 = (short)5399;
signed char var_3 = (signed char)38;
unsigned long long int var_5 = 1690533091157766621ULL;
unsigned long long int var_8 = 4304826871289081154ULL;
unsigned int var_9 = 4126653119U;
int zero = 0;
unsigned long long int var_10 = 16572337088983716038ULL;
short var_11 = (short)19983;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
