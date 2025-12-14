#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)43702;
short var_3 = (short)14650;
signed char var_9 = (signed char)37;
unsigned short var_14 = (unsigned short)26800;
unsigned char var_17 = (unsigned char)173;
int zero = 0;
short var_18 = (short)-3621;
unsigned long long int var_19 = 14435104972391649282ULL;
void init() {
}

void checksum() {
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
