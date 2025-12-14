#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)0;
unsigned char var_4 = (unsigned char)78;
unsigned short var_6 = (unsigned short)16732;
unsigned long long int var_7 = 16338027327130381666ULL;
int var_8 = -291466400;
unsigned int var_9 = 1705515975U;
unsigned long long int var_10 = 10641863541484062362ULL;
long long int var_11 = -5760137290726864242LL;
int zero = 0;
signed char var_12 = (signed char)116;
unsigned int var_13 = 3547051912U;
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
