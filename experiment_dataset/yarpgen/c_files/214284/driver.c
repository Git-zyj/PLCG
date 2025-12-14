#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-29204;
int var_4 = -1185043600;
int var_7 = -1074741370;
unsigned char var_11 = (unsigned char)58;
short var_13 = (short)-19334;
int zero = 0;
unsigned int var_16 = 2336803998U;
int var_17 = -361861017;
int var_18 = 782736042;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
