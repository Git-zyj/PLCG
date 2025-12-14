#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-33;
signed char var_6 = (signed char)-40;
int var_8 = 1621950251;
signed char var_9 = (signed char)38;
int var_11 = -198530323;
int zero = 0;
unsigned long long int var_12 = 10733838915831348154ULL;
long long int var_13 = 99078038792130311LL;
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
