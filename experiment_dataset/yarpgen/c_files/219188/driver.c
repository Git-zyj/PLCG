#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 724921359U;
unsigned int var_1 = 4110807428U;
unsigned int var_5 = 1257399321U;
unsigned long long int var_7 = 11086140388267430295ULL;
unsigned int var_15 = 3050364231U;
unsigned long long int var_17 = 5556835794202199095ULL;
int zero = 0;
unsigned long long int var_18 = 9246381690509105894ULL;
unsigned int var_19 = 550039351U;
unsigned int var_20 = 4056311699U;
signed char var_21 = (signed char)102;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
