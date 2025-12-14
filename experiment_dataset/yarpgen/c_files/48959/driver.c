#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_5 = 196206597U;
unsigned int var_6 = 3803592743U;
unsigned int var_7 = 618102009U;
unsigned int var_9 = 2989625994U;
unsigned int var_10 = 2516344939U;
unsigned int var_11 = 4183127326U;
unsigned int var_13 = 2488526257U;
unsigned int var_14 = 1271098047U;
unsigned int var_15 = 3248234408U;
int zero = 0;
unsigned int var_16 = 1640380658U;
unsigned int var_17 = 3614329230U;
unsigned int var_18 = 3073894981U;
unsigned int var_19 = 2883858847U;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
