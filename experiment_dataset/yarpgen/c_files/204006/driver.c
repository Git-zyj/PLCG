#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)211;
unsigned short var_4 = (unsigned short)4041;
short var_5 = (short)29579;
short var_7 = (short)-6090;
int var_9 = 1096212676;
int zero = 0;
unsigned long long int var_14 = 11984446366331926487ULL;
unsigned char var_15 = (unsigned char)169;
short var_16 = (short)28186;
void init() {
}

void checksum() {
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
