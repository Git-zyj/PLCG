#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)196;
unsigned long long int var_5 = 18081002766684872015ULL;
_Bool var_6 = (_Bool)1;
short var_18 = (short)-28882;
int zero = 0;
unsigned long long int var_19 = 3117040017914706981ULL;
int var_20 = -1490256038;
void init() {
}

void checksum() {
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
