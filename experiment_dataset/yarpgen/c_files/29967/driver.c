#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_7 = 90202618468402394ULL;
unsigned int var_9 = 2550353954U;
unsigned int var_10 = 3197391929U;
int zero = 0;
long long int var_13 = 6621332303459861242LL;
long long int var_14 = 4482834685903183027LL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
