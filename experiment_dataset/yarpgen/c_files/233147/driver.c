#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = -381956784284184051LL;
long long int var_6 = 7314754846708771393LL;
long long int var_9 = -4131386836441765071LL;
unsigned long long int var_10 = 11462396616880348439ULL;
int zero = 0;
unsigned int var_11 = 985335097U;
signed char var_12 = (signed char)-11;
long long int var_13 = -2466442805727625790LL;
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
