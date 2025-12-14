#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1821066937;
long long int var_1 = 1157134990721478890LL;
long long int var_3 = 2194823072912920963LL;
unsigned long long int var_8 = 13112028388008426968ULL;
unsigned int var_9 = 2146509108U;
int zero = 0;
signed char var_11 = (signed char)95;
short var_12 = (short)-16002;
long long int var_13 = 4678886591001972342LL;
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
