#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = -7176763505159477095LL;
unsigned int var_7 = 2962530493U;
unsigned long long int var_15 = 12328140690402262103ULL;
int zero = 0;
short var_17 = (short)-25650;
unsigned char var_18 = (unsigned char)88;
signed char var_19 = (signed char)42;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
