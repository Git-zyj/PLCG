#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 3974178765U;
int var_6 = -867014537;
int var_7 = -1586521625;
_Bool var_10 = (_Bool)1;
int zero = 0;
int var_12 = 208781956;
unsigned char var_13 = (unsigned char)126;
void init() {
}

void checksum() {
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
