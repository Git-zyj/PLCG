#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -6057418863622396776LL;
long long int var_5 = 6752767702711554642LL;
short var_6 = (short)-31653;
unsigned int var_9 = 3175213747U;
unsigned short var_10 = (unsigned short)47277;
int zero = 0;
int var_11 = 1622052596;
unsigned int var_12 = 199264555U;
unsigned long long int var_13 = 3842777971272335057ULL;
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
