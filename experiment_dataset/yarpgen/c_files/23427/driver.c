#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_9 = (signed char)-35;
long long int var_13 = -3987444319983263823LL;
unsigned int var_16 = 2023087380U;
signed char var_18 = (signed char)-68;
int zero = 0;
unsigned short var_20 = (unsigned short)51726;
int var_21 = 189988121;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
