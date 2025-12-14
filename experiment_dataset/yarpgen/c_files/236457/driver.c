#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_5 = 16295764990154949344ULL;
signed char var_6 = (signed char)63;
_Bool var_7 = (_Bool)0;
signed char var_9 = (signed char)32;
signed char var_12 = (signed char)115;
short var_13 = (short)5766;
int zero = 0;
short var_16 = (short)7542;
unsigned long long int var_17 = 3313108229670328118ULL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
