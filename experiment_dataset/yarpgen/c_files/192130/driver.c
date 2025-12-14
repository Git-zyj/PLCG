#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 5125085035303437252ULL;
unsigned int var_4 = 3392080082U;
long long int var_5 = 366644812782674088LL;
long long int var_6 = -8508158164829275295LL;
unsigned int var_8 = 2304002579U;
unsigned int var_9 = 4262892252U;
int zero = 0;
unsigned int var_10 = 3548116705U;
unsigned int var_11 = 1871916521U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
