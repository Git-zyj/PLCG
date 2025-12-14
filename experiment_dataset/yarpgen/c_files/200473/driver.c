#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 1589431358U;
signed char var_4 = (signed char)-72;
signed char var_6 = (signed char)-95;
long long int var_10 = 6007778096321518589LL;
int zero = 0;
unsigned int var_12 = 1704251270U;
unsigned char var_13 = (unsigned char)225;
int var_14 = 755992341;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
