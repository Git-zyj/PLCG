#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)108;
unsigned char var_7 = (unsigned char)172;
long long int var_10 = 7272036202924604210LL;
int zero = 0;
signed char var_13 = (signed char)83;
unsigned char var_14 = (unsigned char)8;
unsigned short var_15 = (unsigned short)123;
unsigned long long int var_16 = 7152471427091884280ULL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
