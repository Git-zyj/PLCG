#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
_Bool var_6 = (_Bool)0;
short var_9 = (short)-11348;
long long int var_11 = 3475240451954949116LL;
unsigned int var_12 = 732112982U;
long long int var_14 = 2603384503521945897LL;
unsigned int var_15 = 3885021603U;
int var_17 = -1511839609;
int zero = 0;
long long int var_18 = 6083431222917063402LL;
_Bool var_19 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
