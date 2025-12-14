#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)104;
signed char var_1 = (signed char)-70;
long long int var_2 = 7128276147590356619LL;
unsigned int var_3 = 980268985U;
unsigned long long int var_5 = 14564368046498195319ULL;
long long int var_6 = 6171972977813666965LL;
int zero = 0;
unsigned char var_10 = (unsigned char)15;
unsigned int var_11 = 1387592057U;
unsigned char var_12 = (unsigned char)78;
unsigned char var_13 = (unsigned char)119;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
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
