#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = -192237345597077112LL;
long long int var_13 = 7437723641274592414LL;
int zero = 0;
unsigned long long int var_18 = 9627484357266909452ULL;
signed char var_19 = (signed char)-50;
int var_20 = 1438754771;
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
