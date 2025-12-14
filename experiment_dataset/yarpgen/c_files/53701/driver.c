#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)28;
int var_5 = -684891637;
int var_8 = 1868698485;
int zero = 0;
long long int var_19 = 1926623367148486405LL;
unsigned long long int var_20 = 4829773587676563585ULL;
unsigned char var_21 = (unsigned char)47;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
