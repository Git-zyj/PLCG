#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-78;
short var_8 = (short)4872;
long long int var_9 = 5938792225874606142LL;
int zero = 0;
unsigned long long int var_15 = 12963612969435040949ULL;
unsigned int var_16 = 4224600886U;
void init() {
}

void checksum() {
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
