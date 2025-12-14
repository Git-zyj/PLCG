#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)150;
short var_3 = (short)-4327;
short var_8 = (short)-11360;
signed char var_9 = (signed char)71;
short var_12 = (short)-29800;
unsigned char var_13 = (unsigned char)14;
signed char var_16 = (signed char)96;
int zero = 0;
short var_19 = (short)-855;
signed char var_20 = (signed char)119;
unsigned char var_21 = (unsigned char)118;
signed char var_22 = (signed char)36;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
