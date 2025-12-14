#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)214;
unsigned long long int var_4 = 5440940728374362071ULL;
long long int var_9 = -2359581970274094549LL;
int zero = 0;
unsigned long long int var_12 = 12057996845788497232ULL;
int var_13 = -1405412389;
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
