#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = 3643151557520988801LL;
long long int var_5 = -5797280871547066540LL;
long long int var_8 = 5021715262631339563LL;
int zero = 0;
long long int var_10 = 3598216958421794104LL;
int var_11 = -455335528;
unsigned short var_12 = (unsigned short)35760;
unsigned short var_13 = (unsigned short)451;
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
