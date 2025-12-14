#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 517117393;
unsigned int var_2 = 80642565U;
short var_6 = (short)24500;
long long int var_7 = -6392057708093829585LL;
long long int var_8 = 4788170871248552728LL;
unsigned int var_9 = 3686253615U;
unsigned char var_10 = (unsigned char)234;
short var_13 = (short)-4888;
_Bool var_14 = (_Bool)0;
int zero = 0;
int var_15 = -1845499807;
int var_16 = 13963856;
unsigned char var_17 = (unsigned char)4;
int var_18 = -1624963744;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
