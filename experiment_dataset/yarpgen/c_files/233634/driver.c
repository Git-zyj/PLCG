#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 308629011U;
unsigned long long int var_4 = 9104523187684145871ULL;
int var_7 = 1947345841;
int zero = 0;
short var_16 = (short)19515;
int var_17 = 755752171;
int var_18 = -1813168875;
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
