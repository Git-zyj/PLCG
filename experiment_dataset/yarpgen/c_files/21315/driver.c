#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-7165;
int var_6 = -204667330;
unsigned char var_10 = (unsigned char)86;
int var_12 = -1397416574;
int zero = 0;
_Bool var_19 = (_Bool)0;
int var_20 = -1679049854;
short var_21 = (short)-794;
void init() {
}

void checksum() {
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
