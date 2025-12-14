#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 5017765240254697932LL;
int var_2 = -1727328280;
signed char var_6 = (signed char)97;
unsigned long long int var_7 = 14258266548782973035ULL;
short var_9 = (short)-31615;
_Bool var_11 = (_Bool)1;
int zero = 0;
int var_14 = 1293958349;
signed char var_15 = (signed char)-121;
unsigned int var_16 = 2112706890U;
unsigned short var_17 = (unsigned short)36816;
void init() {
}

void checksum() {
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
