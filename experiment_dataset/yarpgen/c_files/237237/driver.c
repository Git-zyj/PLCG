#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)27509;
signed char var_1 = (signed char)12;
short var_2 = (short)31729;
unsigned short var_3 = (unsigned short)38499;
signed char var_5 = (signed char)120;
unsigned short var_6 = (unsigned short)47398;
signed char var_8 = (signed char)-31;
signed char var_9 = (signed char)71;
short var_10 = (short)-15980;
signed char var_11 = (signed char)10;
short var_16 = (short)-23591;
int zero = 0;
signed char var_17 = (signed char)122;
short var_18 = (short)105;
short var_19 = (short)15448;
signed char var_20 = (signed char)-98;
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
