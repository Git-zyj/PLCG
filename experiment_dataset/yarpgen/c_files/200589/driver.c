#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)43978;
long long int var_1 = 8006050774937365514LL;
long long int var_2 = 7220607347032139226LL;
signed char var_9 = (signed char)40;
int zero = 0;
long long int var_10 = 7268539310301538750LL;
long long int var_11 = 7761436229157034734LL;
signed char var_12 = (signed char)59;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
