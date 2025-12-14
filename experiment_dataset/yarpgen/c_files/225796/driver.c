#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -1390990415213051601LL;
unsigned int var_1 = 3001677683U;
int var_2 = 2028137916;
long long int var_9 = 7504952793586551716LL;
signed char var_11 = (signed char)-85;
int zero = 0;
long long int var_12 = 8561438369717918557LL;
signed char var_13 = (signed char)26;
void init() {
}

void checksum() {
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
