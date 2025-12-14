#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 583966970U;
unsigned int var_1 = 3418536034U;
unsigned char var_2 = (unsigned char)13;
long long int var_3 = 8196697390216019827LL;
unsigned char var_6 = (unsigned char)50;
long long int var_9 = -3025972971042928113LL;
long long int var_10 = -6655612843268447190LL;
int zero = 0;
unsigned char var_11 = (unsigned char)14;
long long int var_12 = 2115783078467959513LL;
unsigned int var_13 = 1738588236U;
long long int var_14 = -4101765378429252058LL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
