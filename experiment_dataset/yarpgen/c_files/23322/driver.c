#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_5 = 5275647172779517864LL;
long long int var_6 = 7404533620518471443LL;
long long int var_8 = 2336504973002191310LL;
int zero = 0;
long long int var_12 = -4682313452994002811LL;
long long int var_13 = 6096719998514670956LL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
