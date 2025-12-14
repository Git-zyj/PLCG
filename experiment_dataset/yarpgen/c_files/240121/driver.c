#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = 1847768197189299644LL;
int var_4 = -484402568;
unsigned long long int var_6 = 4603184961861635369ULL;
unsigned char var_9 = (unsigned char)175;
int zero = 0;
unsigned char var_11 = (unsigned char)243;
signed char var_12 = (signed char)-88;
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
