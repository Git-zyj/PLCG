#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1380001737;
unsigned char var_3 = (unsigned char)145;
unsigned char var_10 = (unsigned char)17;
int zero = 0;
long long int var_17 = 7789179085541997474LL;
int var_18 = -345592890;
void init() {
}

void checksum() {
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
