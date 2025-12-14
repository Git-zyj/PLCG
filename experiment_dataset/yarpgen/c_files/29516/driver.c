#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1348925794;
unsigned char var_2 = (unsigned char)168;
signed char var_3 = (signed char)-97;
unsigned char var_4 = (unsigned char)25;
unsigned short var_11 = (unsigned short)4369;
int zero = 0;
unsigned long long int var_18 = 9270080171685510218ULL;
unsigned long long int var_19 = 14878174941956496083ULL;
unsigned char var_20 = (unsigned char)68;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
