#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)50699;
unsigned short var_4 = (unsigned short)15892;
unsigned short var_7 = (unsigned short)16304;
unsigned char var_15 = (unsigned char)43;
int var_18 = 636019836;
int zero = 0;
long long int var_19 = 7397503109728034064LL;
signed char var_20 = (signed char)67;
unsigned short var_21 = (unsigned short)33958;
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
