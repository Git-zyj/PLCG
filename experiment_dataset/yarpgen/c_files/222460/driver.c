#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1278261790U;
unsigned int var_5 = 3480018811U;
short var_14 = (short)-26084;
long long int var_15 = -5531911019559984021LL;
int zero = 0;
unsigned int var_20 = 715684887U;
signed char var_21 = (signed char)38;
unsigned int var_22 = 2541833222U;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
