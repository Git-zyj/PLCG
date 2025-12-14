#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_5 = (unsigned short)54591;
signed char var_8 = (signed char)34;
long long int var_11 = 565772291107406600LL;
int var_12 = 7883642;
int zero = 0;
unsigned char var_17 = (unsigned char)5;
int var_18 = 317219978;
int var_19 = 336558324;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
