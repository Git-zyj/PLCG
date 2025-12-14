#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-17183;
short var_13 = (short)-14799;
unsigned long long int var_17 = 4102453803061500528ULL;
int zero = 0;
short var_18 = (short)-19500;
unsigned long long int var_19 = 12084485908982879307ULL;
unsigned char var_20 = (unsigned char)103;
short var_21 = (short)26303;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
