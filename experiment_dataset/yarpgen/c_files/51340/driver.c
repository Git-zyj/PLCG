#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_6 = (signed char)20;
unsigned short var_9 = (unsigned short)47433;
short var_11 = (short)10963;
int zero = 0;
int var_13 = -258499188;
signed char var_14 = (signed char)-69;
unsigned short var_15 = (unsigned short)60929;
void init() {
}

void checksum() {
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
