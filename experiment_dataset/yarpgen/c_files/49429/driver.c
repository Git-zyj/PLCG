#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 617305809536276536ULL;
long long int var_14 = -2323786066543610949LL;
int zero = 0;
unsigned int var_19 = 823312424U;
unsigned int var_20 = 2408565893U;
unsigned char var_21 = (unsigned char)169;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
