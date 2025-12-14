#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)103;
unsigned long long int var_2 = 10464659803032745673ULL;
signed char var_5 = (signed char)-52;
short var_8 = (short)-2723;
unsigned char var_9 = (unsigned char)140;
int zero = 0;
unsigned char var_10 = (unsigned char)53;
unsigned int var_11 = 870974992U;
short var_12 = (short)520;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
