#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_6 = 15674432410405004135ULL;
unsigned char var_7 = (unsigned char)148;
int var_14 = 467169259;
unsigned short var_16 = (unsigned short)32515;
int zero = 0;
signed char var_20 = (signed char)20;
unsigned char var_21 = (unsigned char)38;
unsigned char var_22 = (unsigned char)121;
unsigned short var_23 = (unsigned short)17048;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
