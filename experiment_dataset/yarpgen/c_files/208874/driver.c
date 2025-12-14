#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 773364168;
unsigned short var_1 = (unsigned short)40086;
unsigned short var_2 = (unsigned short)48112;
unsigned long long int var_4 = 625384942940717114ULL;
unsigned short var_6 = (unsigned short)44369;
int var_10 = -1512514412;
unsigned short var_12 = (unsigned short)31071;
signed char var_13 = (signed char)89;
int zero = 0;
short var_16 = (short)-6216;
unsigned short var_17 = (unsigned short)19972;
short var_18 = (short)-19445;
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
