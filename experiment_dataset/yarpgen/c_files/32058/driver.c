#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)71;
unsigned short var_8 = (unsigned short)47845;
unsigned int var_13 = 3683384455U;
int zero = 0;
unsigned short var_18 = (unsigned short)50688;
long long int var_19 = -7753346986868037845LL;
signed char var_20 = (signed char)60;
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
