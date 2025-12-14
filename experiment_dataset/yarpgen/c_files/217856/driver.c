#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-109;
long long int var_3 = -3181344975197213530LL;
int zero = 0;
unsigned long long int var_20 = 13434885722024855604ULL;
signed char var_21 = (signed char)4;
unsigned short var_22 = (unsigned short)58171;
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
