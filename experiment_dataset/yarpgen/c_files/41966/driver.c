#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)67;
unsigned int var_2 = 3298031023U;
long long int var_4 = 6455201269276650143LL;
long long int var_9 = -3486790843679724459LL;
int zero = 0;
int var_14 = 499800581;
int var_15 = 1964676327;
unsigned char var_16 = (unsigned char)182;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
