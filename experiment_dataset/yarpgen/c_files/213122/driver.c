#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -9219219321270584845LL;
int var_3 = -705117675;
unsigned long long int var_5 = 17589776874610879613ULL;
unsigned int var_7 = 2642286500U;
int zero = 0;
signed char var_10 = (signed char)-18;
signed char var_11 = (signed char)126;
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
