#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)40;
int var_3 = -1534522583;
unsigned int var_9 = 14074993U;
unsigned long long int var_11 = 5962150198640126085ULL;
int zero = 0;
signed char var_13 = (signed char)90;
unsigned long long int var_14 = 16506830458482797147ULL;
int var_15 = -494959270;
unsigned long long int var_16 = 9770031141248432752ULL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
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
