#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 828033632U;
long long int var_5 = 5903299048520453215LL;
short var_12 = (short)17773;
long long int var_13 = 6448447601816120368LL;
int zero = 0;
short var_14 = (short)20079;
unsigned int var_15 = 3479985965U;
void init() {
}

void checksum() {
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
