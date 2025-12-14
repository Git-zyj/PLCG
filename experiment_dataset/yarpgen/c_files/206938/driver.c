#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)25;
signed char var_5 = (signed char)105;
unsigned int var_9 = 2551960583U;
int zero = 0;
long long int var_10 = 2169868707290588840LL;
unsigned long long int var_11 = 2275598089120961574ULL;
unsigned int var_12 = 3887189607U;
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
