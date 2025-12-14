#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -7683356050852284166LL;
unsigned long long int var_3 = 14940745275310565323ULL;
unsigned long long int var_7 = 3974659394043113677ULL;
signed char var_8 = (signed char)10;
int zero = 0;
int var_12 = 1135309829;
signed char var_13 = (signed char)126;
unsigned long long int var_14 = 11994531915902598727ULL;
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
