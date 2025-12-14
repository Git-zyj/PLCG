#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 4199085367440331577ULL;
unsigned long long int var_6 = 16950642587647493620ULL;
_Bool var_9 = (_Bool)1;
int zero = 0;
short var_15 = (short)-777;
unsigned char var_16 = (unsigned char)138;
signed char var_17 = (signed char)67;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
