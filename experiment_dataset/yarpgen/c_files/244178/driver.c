#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-29004;
signed char var_2 = (signed char)76;
int var_6 = 1369427145;
int var_9 = -1888639899;
unsigned int var_10 = 3398463923U;
signed char var_13 = (signed char)-56;
unsigned int var_14 = 1479650570U;
int zero = 0;
short var_15 = (short)-19333;
int var_16 = 1934634807;
unsigned int var_17 = 466990562U;
void init() {
}

void checksum() {
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
