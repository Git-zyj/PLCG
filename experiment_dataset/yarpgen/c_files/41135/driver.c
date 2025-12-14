#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 1650979015148174800LL;
signed char var_5 = (signed char)-4;
unsigned char var_17 = (unsigned char)215;
int zero = 0;
unsigned long long int var_19 = 43742987830371664ULL;
unsigned short var_20 = (unsigned short)34642;
long long int var_21 = -5803374222623585347LL;
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
