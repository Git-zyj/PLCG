#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)5116;
signed char var_8 = (signed char)18;
unsigned short var_10 = (unsigned short)898;
int zero = 0;
unsigned short var_12 = (unsigned short)51675;
unsigned int var_13 = 1232674901U;
unsigned int var_14 = 226126814U;
unsigned short var_15 = (unsigned short)5845;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
