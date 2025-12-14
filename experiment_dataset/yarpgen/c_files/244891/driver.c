#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)133;
unsigned short var_1 = (unsigned short)57919;
short var_2 = (short)-4120;
signed char var_7 = (signed char)-51;
signed char var_8 = (signed char)37;
int zero = 0;
short var_17 = (short)-12959;
signed char var_18 = (signed char)118;
unsigned short var_19 = (unsigned short)38386;
unsigned char var_20 = (unsigned char)174;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
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
