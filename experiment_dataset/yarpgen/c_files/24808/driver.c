#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1743490684U;
unsigned long long int var_4 = 2250772190551956773ULL;
short var_5 = (short)7175;
int var_7 = -1393644758;
int zero = 0;
int var_10 = -714409669;
long long int var_11 = -5265959324237642601LL;
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
