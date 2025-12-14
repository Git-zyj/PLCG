#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)14;
short var_4 = (short)20081;
unsigned char var_9 = (unsigned char)105;
unsigned char var_11 = (unsigned char)162;
int zero = 0;
unsigned long long int var_20 = 5160197334579470662ULL;
int var_21 = 900154388;
void init() {
}

void checksum() {
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
