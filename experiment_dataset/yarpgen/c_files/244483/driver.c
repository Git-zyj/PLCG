#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -406133087589680232LL;
int var_2 = -1074145056;
long long int var_17 = -6820234168786834769LL;
int zero = 0;
unsigned int var_18 = 3679993833U;
unsigned char var_19 = (unsigned char)49;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
