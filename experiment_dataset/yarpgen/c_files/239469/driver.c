#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_11 = (signed char)-73;
long long int var_13 = 7207465814542111105LL;
unsigned short var_16 = (unsigned short)18142;
int zero = 0;
unsigned int var_17 = 2505314689U;
unsigned short var_18 = (unsigned short)23331;
long long int var_19 = 3556504493799844908LL;
unsigned short var_20 = (unsigned short)14916;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
