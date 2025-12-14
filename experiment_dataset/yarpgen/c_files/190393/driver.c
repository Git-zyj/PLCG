#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -4592849265547805037LL;
long long int var_4 = 7871922898466845461LL;
long long int var_11 = -377724350563547231LL;
unsigned int var_14 = 2672925235U;
int var_16 = -2105417625;
unsigned long long int var_18 = 12855722781932126137ULL;
int zero = 0;
unsigned long long int var_20 = 15577014626355653297ULL;
int var_21 = -187487336;
long long int var_22 = 8439947037679482036LL;
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
