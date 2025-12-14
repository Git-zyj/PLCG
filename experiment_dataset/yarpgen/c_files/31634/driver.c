#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_6 = -191782533;
_Bool var_8 = (_Bool)0;
_Bool var_11 = (_Bool)0;
int var_12 = 842008538;
long long int var_13 = 1115286230769862934LL;
int zero = 0;
short var_15 = (short)-18739;
long long int var_16 = 3682996423868619278LL;
void init() {
}

void checksum() {
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
