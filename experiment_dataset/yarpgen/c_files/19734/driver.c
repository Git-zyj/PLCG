#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)55199;
short var_1 = (short)-6043;
long long int var_2 = 5575738672075621798LL;
signed char var_3 = (signed char)35;
unsigned short var_4 = (unsigned short)13143;
short var_5 = (short)18235;
unsigned short var_6 = (unsigned short)48098;
unsigned short var_7 = (unsigned short)12990;
signed char var_8 = (signed char)-13;
signed char var_12 = (signed char)-63;
int zero = 0;
signed char var_14 = (signed char)-107;
short var_15 = (short)-19000;
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
