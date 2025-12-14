#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_6 = -5273202777399405592LL;
unsigned long long int var_14 = 16004327998474545778ULL;
unsigned char var_15 = (unsigned char)89;
int zero = 0;
signed char var_18 = (signed char)-71;
signed char var_19 = (signed char)96;
short var_20 = (short)-26684;
unsigned long long int var_21 = 3668790919964839345ULL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
