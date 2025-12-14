#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)106;
unsigned int var_2 = 1111911706U;
unsigned int var_5 = 591594894U;
long long int var_7 = -5446060138212857349LL;
unsigned int var_9 = 3030078744U;
int zero = 0;
unsigned int var_12 = 1363238656U;
unsigned int var_13 = 272253719U;
short var_14 = (short)21209;
short var_15 = (short)-4929;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
