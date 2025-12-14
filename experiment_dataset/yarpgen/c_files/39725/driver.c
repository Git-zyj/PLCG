#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 647219638U;
int var_4 = 1578601551;
unsigned long long int var_5 = 2699145401809189742ULL;
short var_6 = (short)-27158;
long long int var_7 = 3535845735183310630LL;
unsigned int var_8 = 3179727608U;
unsigned long long int var_9 = 792022001154281755ULL;
signed char var_10 = (signed char)-10;
int zero = 0;
int var_12 = 73090836;
unsigned int var_13 = 1418363997U;
unsigned long long int var_14 = 8209966201366459643ULL;
short var_15 = (short)24197;
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
