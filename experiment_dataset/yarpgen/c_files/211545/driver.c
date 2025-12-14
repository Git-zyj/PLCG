#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 6978320976171012220LL;
signed char var_2 = (signed char)120;
int var_3 = -1303439579;
unsigned char var_8 = (unsigned char)7;
long long int var_19 = -2907667642105272464LL;
int zero = 0;
unsigned int var_20 = 2613801187U;
unsigned char var_21 = (unsigned char)35;
void init() {
}

void checksum() {
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
