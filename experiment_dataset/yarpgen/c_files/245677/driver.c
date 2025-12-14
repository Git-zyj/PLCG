#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 8977021725941999315LL;
signed char var_9 = (signed char)-102;
long long int var_10 = -1830056342178987150LL;
int zero = 0;
long long int var_16 = 3494219699537111768LL;
unsigned int var_17 = 3490027567U;
signed char var_18 = (signed char)-55;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
