#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_9 = 1983652613291162170ULL;
int var_13 = -1570925463;
short var_14 = (short)-3333;
unsigned short var_15 = (unsigned short)15663;
int zero = 0;
int var_20 = 1129414508;
int var_21 = 1471319489;
unsigned int var_22 = 2955172705U;
unsigned int var_23 = 494476996U;
short var_24 = (short)19511;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
