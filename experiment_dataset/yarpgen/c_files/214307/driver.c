#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_5 = 4353203539410606337ULL;
unsigned long long int var_8 = 12538496406179402628ULL;
unsigned long long int var_10 = 5313094774739139469ULL;
unsigned long long int var_12 = 10883727941274715130ULL;
unsigned long long int var_15 = 13837121140770194615ULL;
int zero = 0;
unsigned long long int var_16 = 16625340161323453038ULL;
unsigned long long int var_17 = 11686033152124197176ULL;
unsigned long long int var_18 = 12530405115387070552ULL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
