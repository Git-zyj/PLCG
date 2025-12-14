#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)35970;
unsigned char var_2 = (unsigned char)69;
unsigned long long int var_9 = 4528354130668152242ULL;
int zero = 0;
unsigned long long int var_10 = 14141527311438196690ULL;
short var_11 = (short)-348;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
