#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1941718968;
unsigned short var_2 = (unsigned short)47615;
unsigned long long int var_16 = 8082083500649050294ULL;
int zero = 0;
long long int var_17 = -898248376759862024LL;
long long int var_18 = 7292837436068041601LL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
