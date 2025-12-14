#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)223;
int var_6 = -1374436730;
unsigned int var_7 = 1257811195U;
int var_11 = 678311155;
int var_17 = 663001584;
int zero = 0;
unsigned short var_20 = (unsigned short)25923;
unsigned long long int var_21 = 12348061784218252163ULL;
unsigned long long int var_22 = 4536225396674603510ULL;
void init() {
}

void checksum() {
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
