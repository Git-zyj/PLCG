#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 4053006835133216844ULL;
unsigned long long int var_6 = 4677482106225667513ULL;
signed char var_10 = (signed char)12;
unsigned long long int var_11 = 470336128931136432ULL;
int zero = 0;
unsigned char var_12 = (unsigned char)156;
short var_13 = (short)31439;
unsigned int var_14 = 2477442902U;
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
