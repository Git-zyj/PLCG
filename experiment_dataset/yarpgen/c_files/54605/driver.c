#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = -8495022562770685760LL;
signed char var_9 = (signed char)-120;
signed char var_10 = (signed char)36;
unsigned int var_16 = 1916380594U;
int zero = 0;
unsigned int var_20 = 3710689880U;
signed char var_21 = (signed char)75;
short var_22 = (short)20219;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
