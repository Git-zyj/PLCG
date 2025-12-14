#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -7097434066889943365LL;
unsigned int var_2 = 36227424U;
unsigned int var_4 = 3969578975U;
int zero = 0;
unsigned long long int var_10 = 7096191483174051188ULL;
signed char var_11 = (signed char)-93;
long long int var_12 = -2665183523526887903LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
