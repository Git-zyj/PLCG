#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 5727140606397256653LL;
int var_2 = 610065323;
unsigned short var_5 = (unsigned short)55470;
int var_6 = -379784057;
int zero = 0;
long long int var_11 = 6111798990731178339LL;
long long int var_12 = 5960549592782980549LL;
void init() {
}

void checksum() {
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
