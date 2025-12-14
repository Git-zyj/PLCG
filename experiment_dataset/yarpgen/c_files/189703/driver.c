#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_9 = 368060658;
int var_10 = 731570569;
long long int var_11 = -3939733778679581641LL;
int zero = 0;
unsigned long long int var_12 = 4630816415736867641ULL;
unsigned short var_13 = (unsigned short)10754;
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
