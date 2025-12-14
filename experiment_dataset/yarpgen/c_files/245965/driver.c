#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)156;
int var_5 = 1206314122;
short var_6 = (short)-1721;
unsigned char var_8 = (unsigned char)38;
unsigned long long int var_9 = 748646381574370735ULL;
unsigned long long int var_12 = 8481021133190676208ULL;
int zero = 0;
_Bool var_14 = (_Bool)1;
unsigned int var_15 = 1809862330U;
void init() {
}

void checksum() {
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
