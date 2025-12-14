#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_4 = (unsigned short)15335;
unsigned char var_8 = (unsigned char)152;
signed char var_13 = (signed char)89;
short var_14 = (short)-21034;
int zero = 0;
long long int var_19 = 4751571499111886481LL;
unsigned short var_20 = (unsigned short)21879;
void init() {
}

void checksum() {
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
