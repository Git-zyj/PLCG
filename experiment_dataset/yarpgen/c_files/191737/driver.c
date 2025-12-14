#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)33;
unsigned int var_1 = 3662305703U;
long long int var_2 = -6675852938661542142LL;
unsigned int var_3 = 1895818134U;
long long int var_4 = 8192294295557466331LL;
int var_8 = 766612554;
unsigned int var_9 = 3791018165U;
unsigned long long int var_12 = 17793934926305832283ULL;
int var_13 = -366917546;
int zero = 0;
unsigned long long int var_14 = 16744903006966557300ULL;
long long int var_15 = 5674000284813915668LL;
unsigned int var_16 = 2253272366U;
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
