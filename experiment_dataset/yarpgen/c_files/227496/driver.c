#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)196;
signed char var_6 = (signed char)-127;
long long int var_9 = 932020212845710657LL;
unsigned long long int var_10 = 6522461755682302787ULL;
int zero = 0;
short var_12 = (short)-10237;
unsigned int var_13 = 1372284193U;
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
