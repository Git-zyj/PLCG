#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = 367005320002707193LL;
long long int var_6 = -6897452042713813650LL;
_Bool var_10 = (_Bool)1;
unsigned char var_13 = (unsigned char)124;
long long int var_18 = 2479567709836150010LL;
int zero = 0;
signed char var_19 = (signed char)-77;
short var_20 = (short)-4569;
_Bool var_21 = (_Bool)1;
long long int var_22 = 5353936691827641587LL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
