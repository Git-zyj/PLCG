#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_6 = (unsigned short)25074;
unsigned int var_7 = 1430275791U;
signed char var_8 = (signed char)60;
int var_9 = 1948206583;
int zero = 0;
signed char var_18 = (signed char)85;
unsigned short var_19 = (unsigned short)13287;
int var_20 = -854012404;
long long int var_21 = 6069432247168716222LL;
unsigned long long int var_22 = 1111955045147337289ULL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
