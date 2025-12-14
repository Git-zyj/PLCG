#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -8020970079948876841LL;
signed char var_2 = (signed char)81;
int var_3 = 1581870359;
int var_6 = 895262632;
unsigned char var_10 = (unsigned char)76;
int zero = 0;
unsigned char var_11 = (unsigned char)251;
unsigned long long int var_12 = 6073303626193252868ULL;
unsigned int var_13 = 3854476685U;
void init() {
}

void checksum() {
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
