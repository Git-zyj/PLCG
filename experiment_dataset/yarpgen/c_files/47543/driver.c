#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_5 = (short)-9553;
long long int var_7 = 7276639680586224408LL;
int var_8 = 731237716;
unsigned long long int var_9 = 11478073921936504135ULL;
int zero = 0;
unsigned char var_10 = (unsigned char)147;
long long int var_11 = -6087519304613739470LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
