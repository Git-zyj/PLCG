#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3526323945U;
unsigned long long int var_3 = 16045810907448485802ULL;
unsigned int var_10 = 302845031U;
int zero = 0;
unsigned long long int var_14 = 17432412744777031702ULL;
short var_15 = (short)-16887;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
