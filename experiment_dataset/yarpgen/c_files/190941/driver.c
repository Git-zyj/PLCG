#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-119;
short var_3 = (short)-4584;
unsigned int var_7 = 1038408220U;
int zero = 0;
short var_18 = (short)31910;
long long int var_19 = 1789340718493936292LL;
signed char var_20 = (signed char)-44;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
